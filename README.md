A device which uses a Tevisio BG51 pin array to detect beta/gamma/X-ray and spin a OG-4 Dekatron device

![spinner](https://github.com/bigcrimping/radiation_spinner/assets/74270551/b44ac98d-5afe-45a5-93ec-de5034ae6524)

The smarts come in the form of a DS02 Dekatron Spinner Kit (modified to work from external source), an Arduino Nano 33 IOT and a Mikroe "Radiation Click" board hosting a Tevisio BG51 device.

I chose to use a BG51 as it has a very linear response and is not as sensitive as most geiger tubes 

![image](https://github.com/bigcrimping/radiation_spinner/assets/74270551/e763a807-191e-4c29-9d03-91b1c2490db9)


The spinner will default to a 1 second per pulse when no radiation is detected

![slow](https://github.com/bigcrimping/radiation_spinner/assets/74270551/6f718fd0-3819-4652-a3fd-c069c179e90d)

When a particle is detected the Dekatron speeds up

![fast](https://github.com/bigcrimping/radiation_spinner/assets/74270551/e29242dc-0c90-4c14-9930-2daeb708d7ac)

## Project Code

The code is here: [https://github.com/bigcrimping/flare_meter/tree/main/arduino_code/flare_meter_0.1](https://github.com/bigcrimping/radiation_spinner/tree/main/code/radiation_spinner_0.1)


## Wiring

The wiring is as below.

Arudino pin 10 to Mikroe "Radiation Click" INT pin
Arduino pin 8 to Spinner input

Inside the chassis it looks like the below

![inside](https://github.com/bigcrimping/radiation_spinner/assets/74270551/25c5a5f2-7025-4397-a743-3b1341e81871)



## Mechanical Files

Mech files are here: [[![image](https://user-images.githubusercontent.com/74270551/180155837-8c465e86-1bfe-498d-afaa-9dbd630525f7.png)](https://github.com/bigcrimping/radiation_spinner/tree/main/mech_files)
](https://github.com/bigcrimping/radiation_spinner/tree/main/mech_files)

![spinner_mech](https://github.com/bigcrimping/radiation_spinner/assets/74270551/a7e46a36-70cc-44df-832c-dd74ce6a6262)


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



