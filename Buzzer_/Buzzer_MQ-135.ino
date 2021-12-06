

int smokeA0 = A0;
int buzzer = 8;


  pinMode(buzzer,OUTPUT)
  pinMode(SmokeA0,INPUT)
   Serial.begin(9600);
  Serial.println("Air quality sensor warming up!")
  delay(2000);
  noTone(buzzer);



 sensorValue=analogRead(smokeA0);
  if(sensorValue >= 150)
  {
    Serial.print(" | Normal air quality!");
    tone(buzzer,1000,200);
  }else
  {
     Serial.print(" | Air pollution!");
  
    noTone(buzzer);
   
  }
  delay(2000); 
