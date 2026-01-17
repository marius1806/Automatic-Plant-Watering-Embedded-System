void setup()
{
   lcd.begin(16, 2); // start the LCD and set it to take inputs
   // set the inputs and the outputs of the hardware
   pinMode(waterSensor, INPUT);
   pinMode(moisturePin, INPUT);
   pinMode(OnOff, OUTPUT);
   pinMode(alarmPin, OUTPUT);
}
