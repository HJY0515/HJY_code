// C++ code
//
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(13, INPUT);
  pinMode(12, INPUT);
  Serial.begin(9600);
  
}

void loop()
{
  int inputValue = digitalRead(13);
  int A = digitalRead(12);
  int val=analogRead(A0);
  if( inputValue == HIGH && A == HIGH){
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(9, HIGH);  
  }
   
  else if(inputValue == LOW && A == LOW){
     digitalWrite(11, LOW);
     digitalWrite(10, LOW);
     digitalWrite(9, LOW);  
  }
  else if(inputValue == HIGH && A == HIGH){
     digitalWrite(11, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(9, HIGH);  
}
  else if(inputValue == HIGH && A == LOW){
    if(0<= val && val <1023*1/5){
      digitalWrite(11, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(9, LOW);
    }
    else if(1023*1/5<= val && val <1023*2/5){
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(9, LOW);
    }
    else if(1023*2/5<= val && val <1023*3/5){
      digitalWrite(11, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(9, LOW);
    }
    else if(1023*3/5 <= val && val <1023*4/5){
      digitalWrite(11, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(9, HIGH);
    }
    else if(1023*4/5 <= val && val <1023*5/5){
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, HIGH);
    }
  }
}
  




/*
if(digitalRead(7)==HIGH){
    digitalWrite(8, HIGH);
  }
  else{
    digitalWrite(8, LOW);
      }
digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  analogRead(13)==val){
     analogWrite(11, val);
     analogWrite(10, val);
     analogWrite(9, val);
   
    int val=analogRead(A0);
  convertedvalue = map(val, 0, 1023, 0, 255);
  if(analogRead(13)==val){
     analogWrite(11, val);
     analogWrite(10, val);
     analogWrite(9, val); 
    
    if(digitalRead(13)==HIGH){
     digitalWrite(11, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(9, HIGH);  
    */
     