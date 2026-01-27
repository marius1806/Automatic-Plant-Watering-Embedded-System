# Automated Plant Irrigation
This project has as its main objective the automation of the plant irrigation process. The project is only a prototype, and is based on a water pump which, based on data acquisition from a sensor, “knows” when it should or should not water a plant.

## Domain Description

The chosen domain was agriculture, where through the advancement of technology, as much control as possible is desired over all tasks within a specific agricultural activity.

## Description of the Proposed Solution

Our solution aims at automatically watering plants, with very little human intervention and making decisions based on the plant’s optimal needs. Minimal human intervention is required to refill the reservoir.

## Description of the Functions
1. Function **setup()**: 

Here, the configuration of the pin modes that will be used in the program is performed.

3. Function **loop()**: 

In this function is the program logic: 
- Data acquisition from the two sensors
- Water pump activation
- Alarm control
- Displaying the text on the LCD

## Presentation of the Functionalities:

*The moisture sensor* is inserted into the plant’s soil, and has the role of acquiring data for the development board. Through it, it is decided whether the plant needs water or not, by measuring the soil moisture at the sensor. Thus, there is no need for someone to start or stop the pump. 

*The level sensor* alerts us when there is no more water in the reservoir, being inserted into the reservoir alongside the water pump. The role of this sensor is to allow the motor to draw as much water as possible, up to the level of the intake opening, where the process stops in order not to let the pump motor continue to run dry, which can overheat and fail.

If the pump did not stop at some point, it would start drawing air when the water runs out and the motor would overheat, which could later stop working. To resume the process, the reservoir is refilled. 

*The water pump* is based on a DC motor. Once it is started, the motor will begin to operate, creating the suction effect at the intake opening, thus the pump absorbing water and then expelling it through the outlet to which we will attach a rubber tube. 

The pump is powered directly from the 5V source, but is controlled by a digital pin on the board. Its control is achieved with the help of an *NPN bipolar transistor* used as a switch. 

If the plant needs water, the pump is started, generating voltage at the transistor’s base from the control pin, the collector being connected to the power source, after which the current exits through the emitter and enters directly into the water pump. 

If the plant is sufficiently watered, the pump stops because the control pin does not generate voltage. Thus, the transistor remains blocked and the pump stopped. 

We also implemented an *LCD screen* that displays the states of the process. Through it, we can always monitor whether the plant needs water or not and also whether the reservoir runs out of sufficient water. The screen contrast can be modified as desired through the potentiometer. 

*The diode* is connected with the anode to ground and the cathode to the current input of the motor, to prevent the reverse current phenomenon characteristic of DC motors. 

If the diode were missing, the reverse current would flow back into the circuit, more exactly into the wires connected to the LCD screen, which would result in incorrect displays with random characters as a result of the phenomenon. 

The board is powered by a *9V battery* through the Arduino board’s voltage regulator (Vin requiring a voltage above 6.2V and ideally a voltage of 9–12V). The setup can also be powered through a USB cable directly from a wall outlet.

## Inspiration Projects


1. [https://littlebirdelectronics.com.au/guides/4/automatic-plant-watering-with-arduinol](https://littlebirdelectronics.com.au/guides/4/automatic-plant-watering-with-arduinol "https://littlebirdelectronics.com.au/guides/4/automatic-plant-watering-with-arduinol")
A guide for correctly connecting the Arduino board, and programming it to monitor soil moisture levels.

2. [https://www.instructables.com/Arduino-Plant-Watering-System/](https://www.instructables.com/Arduino-Plant-Watering-System/ "https://www.instructables.com/Arduino-Plant-Watering-System/")

A project explained in detail, with important information about connecting the components in the system.

3. [https://all3dp.com/2/arduino-watering-system-plant-irrigation-project/](https://all3dp.com/2/arduino-watering-system-plant-irrigation-project/ "https://all3dp.com/2/arduino-watering-system-plant-irrigation-project/")

A list of similar projects, to inspire us in which direction we want to take the project, and to see more types of implementations/methods.

Photo of the physical system

https://drive.google.com/file/d/1JjNN5J7rqB9Y7VEqI2ETJJCZhXCpOuPM/view?usp=share_link

Photo of the electrical schematic


https://drive.google.com/file/d/1pBTtXYBoKVpl2ghW-xNlZd-EVJemro_j/view?usp=share_link

