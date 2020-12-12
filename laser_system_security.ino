int i,j;
float myV;
void setup() {

pinMode(12,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(A2,INPUT); 
  
}
void loop() {
digitalWrite(12,HIGH); 
j=analogRead(A2);
myV=(5.0/1023.0)*j;
 
if(myV>5){
  
  digitalWrite(8,HIGH);
  tone(9,1000);
  delay(200);
  tone(9,0);
  delay(200);
 }
  

 
}
