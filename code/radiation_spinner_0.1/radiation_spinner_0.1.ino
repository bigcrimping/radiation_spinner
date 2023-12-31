// Pin definitions
const int inputPin = 10;   // Pin connected to the radiation click board
const int outputPin = 8;   // Pin connected to the Dekatron

// Frequency bounds
const int minDelay = 10;       // Minimum loop delay between pulses
const int maxDelay = 1000;     // Minimum loop delay between pulses
const int decay_value = 500;   // time in ms between decrements of speed

// Variables
unsigned long clickCount = minDelay;     // Number of clicks, set to fastest to start
unsigned long lastClickTime = 0;         // Time of the last click

void setup() {
  pinMode(inputPin, INPUT);
  pinMode(outputPin, OUTPUT);
  
  // Attach interrupt to the rising edge of the input pin
  attachInterrupt(digitalPinToInterrupt(inputPin), increaseFrequency, FALLING);
}

void loop() {
  
  perform_output(); //send the pulses to the Dekatron
  
  // Calculate the time elapsed since the last click
  unsigned long timeSinceLastClick = millis() - lastClickTime;
  
  // Increment clickcount (to reduce spin speed) every decay_value of time elapse
  if (timeSinceLastClick >= decay_value) {
    if(clickCount < maxDelay) {
      clickCount = clickCount + 2;
    }
    
    lastClickTime = millis();
  }
  delay(clickCount);
}

void increaseFrequency() { //Whenever a pulse is detected set the spin speed to maximum
  // Increase the click count
  clickCount = minDelay;
  
  // Update the last click time
  lastClickTime = millis();
}


void perform_output() { //Send a pulse of 1ms to increment the Dekatron
  digitalWrite(outputPin, HIGH);
  delay(1);
  digitalWrite(outputPin,LOW);
}
