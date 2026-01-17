void loop() 
{
  digitalWrite(OnOff, LOW); // start with the water pump being inactive
  analogWrite(alarmPin, 0);
  lcd.clear();
  if (digitalRead(waterSensor) == LOW) // check if the water has fallen below the water level sensor
  {    
    // set the alarm state to give the warning
    analogWrite(alarmPin, 150);
    delay(500);
    analogWrite(alarmPin, 0);
    lcd.setCursor(0, 0);
    lcd.print("Get water!");
  }
  else
  {
    int sensorValue = analogRead(moisturePin); // check the moisture level of the plant's soil
    if(sensorValue < thresholdValue)
    {
       lcd.setCursor(0, 0);
       lcd.print("Plant doesn't");
       lcd.setCursor(0, 1);
       lcd.print("need water");
    }
    else 
    {
       lcd.setCursor(0, 0);
       lcd.print("Plant needs");
       lcd.setCursor(0, 1);
       lcd.print("water");
       digitalWrite(OnOff, HIGH); // if the plant needs water, the water pump will start
    }
  }
  delay(500);
}

