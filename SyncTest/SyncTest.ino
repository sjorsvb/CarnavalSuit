int counter;
void setup(){
  Serial.begin(9600); // same as in your c++ script
  counter = 0;
  pinMode(13,OUTPUT);
}

void loop(){
  if(Serial.available() > 0){
    char state = Serial.read();
    switch(state){
     case '0':
      counter = 5000; 
      break;
     case '1':
      counter = 0; 
      break;
      
    }
  }
  
  if((counter / 1000)%2==0){
    digitalWrite(13,HIGH);
  }else{
    digitalWrite(13,LOW);
  }
  
  
  
  delay(5);
  counter++;
}
