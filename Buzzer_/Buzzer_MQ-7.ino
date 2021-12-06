

int CO = A1;
int buzzer = 8;

  pinMode(buzzer,OUTPUT)
  pinMode(CO,INPUT)
  
  // the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
    Serial.println("CO sensor warming up!")
  delay(2000);
  noTone(buzzer);
}

 sensorValue=analogRead(CO);
  if(sensorValue >= 100)
  {
    Serial.print(" | Normal CO value!");
    tone(buzzer,1000,200);
  }else
  {
     Serial.print(" | Pollyted CO value!");
  
    noTone(buzzer);
   
  }
  delay(2000); 
 
