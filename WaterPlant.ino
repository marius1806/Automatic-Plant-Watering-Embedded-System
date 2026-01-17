#include <LiquidCrystal.h>

LiquidCrystal lcd(11, 12, 10, 9, 8, 7); // the LCD configuration
int waterSensor = 6; // water level detection sensor
int thresholdValue = 550; // soil moisture threshold
int moisturePin = A0; // soil moisture detection sensor
int OnOff = 4; // the state of the water pump
int alarmPin = 3; // the piezo alarm
