char Reading;
void setup()
{
  Serial.begin(9600);
 for (int i=2;i<=5;i++)pinMode(i,1);
}

void loop()
{ 
  Reading=Serial.read();
  switch(Reading)
    {
      case'F':
      digitalWrite(2,1);
      digitalWrite(3,0);
      digitalWrite(4,1);
      digitalWrite(5,0);   
      Serial.println("Moving Forward");
      break;
    
      case'B':
      digitalWrite(2,0);
      digitalWrite(3,1);
      digitalWrite(4,0);
      digitalWrite(5,1);
      Serial.println("Moving Backwards");
      break;
    
      case'L':  
      digitalWrite(2,0);
      digitalWrite(3,0);
      digitalWrite(4,1);
      digitalWrite(5,0);
      Serial.println("Moving Left");
      break;

      case'R':
      digitalWrite(2,1);
      digitalWrite(3,0);
      digitalWrite(4,0);
      digitalWrite(5,0);
      Serial.println("Moving Right");
      break;

      case'S':
      digitalWrite(2,0);
      digitalWrite(3,0);
      digitalWrite(4,0);
      digitalWrite(5,0);
      Serial.println("Stopped");
      break;
    }
}