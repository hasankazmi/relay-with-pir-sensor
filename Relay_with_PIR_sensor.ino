int relayPin = 3;
int pirSensorPin = 2;
int val = 0; 

//long unsigned int timeLow;
//boolean takeLowTime;
// 
//
//int calibrationTime = 30;
 
void setup() {
pinMode(relayPin, OUTPUT); 
pinMode(pirSensorPin, INPUT); 
 
Serial.begin(9600);
 
}
 
void loop(){
  
val = digitalRead(pirSensorPin); 
if (val == HIGH) { 
  
digitalWrite(relayPin, HIGH); 


}else {
digitalWrite(relayPin, LOW); 

}
}
