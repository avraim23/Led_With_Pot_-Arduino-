int x , y ;
void setup() {
  Serial.begin(9600);
  Serial.println("Code Begin") ;
  pinMode(13 ,OUTPUT);
  pinMode(3 ,OUTPUT);
  pinMode(A7,INPUT);
}

void loop() {
  y = map( analogRead(A7) , 0 , 1023 , 50 , 150) ;
  if(y>100) digitalWrite(13,HIGH) ;
  else digitalWrite(13,LOW) ;
  Serial.print("New y :") ;
  Serial.println(y) ;
  analogWrite(3 , y) ;
  delay(2);
}
