## Radiation Spinner
A device which uses a Tevisio BG51 pin array to detect beta/gamma/X-ray and spin a OG-4 Dekatron device

![spinner](https://github.com/bigcrimping/radiation_spinner/assets/74270551/6cd2b1d6-3d2b-48b6-a9dd-424c98da14b1)


The smarts come in the form of a DS02 Dekatron Spinner Kit (modified to work from external source), an Arduino Nano 33 IOT and a Mikroe "Radiation Click" board hosting a Tevisio BG51 device.

I chose to use a BG51 as it has a very linear response and is not as sensitive as most geiger tubes 

![graph](https://github.com/bigcrimping/radiation_spinner/assets/74270551/e4f8643e-5bfb-4f78-9582-3d21bd276a9c)


The spinner will default to a 1 second per pulse when no radiation is detected

![slow](https://github.com/bigcrimping/radiation_spinner/assets/74270551/92cdff82-da14-4fa1-b225-3fd0a5335002)


When a particle is detected the Dekatron speeds up

![fast](https://github.com/bigcrimping/radiation_spinner/assets/74270551/5f095de3-22b6-4ea5-bcc9-3cc6ef00f49a)


## Project Code

The code is here: [https://github.com/bigcrimping/flare_meter/tree/main/arduino_code/flare_meter_0.1](https://github.com/bigcrimping/radiation_spinner/tree/main/code/radiation_spinner_0.1)


## Wiring

The wiring is as below.

Arudino pin 10 to Mikroe "Radiation Click" INT pin
Arduino pin 8 to Spinner input

Inside the chassis it looks like the below

![inside](https://github.com/bigcrimping/radiation_spinner/assets/74270551/5cfe9ed6-7099-41d8-b1d4-1c2d837ac0ad)

I managed to snap off the mount for the Arudino hence the glue, I will reprint the base part to fix this


## Mechanical Files

Mech files are here: (https://github.com/bigcrimping/radiation_spinner/tree/main/mech_files)

![spinner_mech](https://github.com/bigcrimping/radiation_spinner/assets/74270551/c49b6037-15be-4ad4-bdb5-a103fe172eb5)


The design comprises (from top to bottom) a 
Top Front
Top Rear
Lower_mount
Base
Base Lide

All mounting holes are M3 brass inserts with M3 x 7mm 

Fixing required 

16 x M3 brass inserts

10 x M3x7mm cap head bolts



