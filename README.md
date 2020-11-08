# 4N35 LED Control

This projects lets you control a LED using a 4N35 optocoupler.

## Materials

- Breadboard
- 4N35
- Arduino Uno
- Around 10 jumper wires
- 2 220ohm resistors
- LED

## Schematic

![design image](https://github.com/angelina-tsuboi/4N35_LED_Control/blob/main/images/design.png)

## How It Works

This project utilizes the 4N35 optocoupler to control a LED. The 7th digitial pin of the Arduino sends signals to the optocoupler in order to determine whether or not the LED turns off or on.

### 4N35 Functionality

 A 4N35 is a optocoupler which consists of a silicon NPN phototransistor and a gallium arsenide infrared LED. A 4N35 breaks the connection between the signal receiver and the signal source to halt the electrical connection. Pin one and two of the optcoupler are connected to an infared LED. When electricity is applied the the infared LED, it will emit infrared rays (EM radiation which contains a longer wave length than visible light). Typically a 1K resistor is connected to pin 1 in order to prevent burning. When the NPN transistor receives the rays, it powers on the load connected to the phototransistor (we will use an LED for this project). This is an example of good electrical isolation because if a short circuit occurs, the control board will not be damaged.

## Completed Project

![project photo](https://github.com/angelina-tsuboi/4N35_LED_Control/blob/main/images/final.jpg)

## Sources

[SunFounder 4N35 tutorial](https://www.sunfounder.com/learn/Super-Kit-V3-0-for-Arduino/lesson-10-4n35-super-kit-v3-for-arduino.html)
[Instructables 4N35 tutorial](https://www.instructables.com/4N35/)
