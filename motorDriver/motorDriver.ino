
int x = 0;
int y = 0;
int x0 = x;
int y0 = y;

void setup() {
 

  x0 = analogRead(A0);
  y0 = analogRead(A1);  
  Serial.begin(115200);
}

void loop() {
  x = analogRead(A0)  -x0;
  y = analogRead(A1) - y0;
  Serial.println(y);
  if(abs(y) > 20){
      analogWrite(11,255);
  }
  else{
      analogWrite(11,0);
  }
  delay(1);
  
}
