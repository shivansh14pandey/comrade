int i,j;
float myV;
int readval=A2;
void setup() {
  Serial.begin(9600);
  pinMode(A2,INPUT);
  for (i=6; i<11 ; i++)
  {
    pinMode(i,OUTPUT);
  }

}

void loop() {
 j=analogRead(readval);
 myV=(5.0/1023.0)*j;
 if(myV>=0){
  
    for(i=5;i<=myV+5;i++){
      digitalWrite(i,HIGH);
      delay(100);
    }
    for(i=6+myV;i<=10;i++){
      digitalWrite(i,LOW);
      delay(100);
    }
   
    
  }
 }
   
