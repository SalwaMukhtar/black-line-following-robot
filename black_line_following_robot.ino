#define leftmotorreverse 2
#define leftmotorforward 3
#define rightmotorreverse 4
#define rightmotorforward 5

#define leftIR 6
#define rightIR 7
void setup(){
  pinMode(leftmotorforward,OUTPUT);
  pinMode(rightmotorforward,OUTPUT);
  pinMode(leftmotorreverse, OUTPUT);
  pinMode(rightmotorreverse,OUTPUT); 
  pinMode(leftIR ,INPUT);
  pinMode(rightIR ,INPUT);

  Serial.begin(9600);
}
void loop(){
  if (digitalRead(leftIR) == LOW && digitalRead(rightIR) == LOW)// Forward
  {
    digitalWrite(leftmotorforward, HIGH);
    digitalWrite(rightmotorforward, HIGH);  
  }
  else if (digitalRead(leftIR) == LOW && digitalRead(rightIR) == HIGH)// Right
  {
    digitalWrite(leftmotorforward,HIGH );
    digitalWrite(rightmotorforward,LOW ); 
  }
  else if (digitalRead(leftIR) == HIGH && digitalRead(rightIR) == LOW )// Left
  {
    digitalWrite(leftmotorforward,LOW );
    digitalWrite(rightmotorforward,HIGH ); 
  }
  else if (digitalRead(leftIR) == HIGH && digitalRead(rightIR) == HIGH)// Stop
  {
    digitalWrite(leftmotorforward,LOW );
    digitalWrite(rightmotorforward,LOW ); 
  }
}
