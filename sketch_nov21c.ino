int led=13;

int voltage = A0;
int voltage1= A1;
int voltage2= A2;
int voltage3= A3;

int vol  =0;
int vol2 =0;
int vol3 =0;
int vol4 =0;

void setup() {
pinMode(voltage,INPUT);
pinMode(voltage1,INPUT);
pinMode(voltage2,INPUT);
pinMode(voltage3,INPUT);

pinMode(13,OUTPUT);

Serial.begin(9600);



}

void loop() {

vol= analogRead(voltage);
Serial.print("Variable_1:");
Serial.println(vol);



vol2 = analogRead(voltage1);
Serial.print("Variable_2:");
Serial.println(vol2);
delay(99);

vol3 = analogRead(voltage2);
Serial.print("Variable_3:");
Serial.println(vol3);
delay(99);

vol4 = analogRead(voltage3);
Serial.print("Variable_4:");
Serial.println(vol4);
delay(99);

if (vol<10){
  digitalWrite(led,HIGH);
}
 else{
digitalWrite(led,LOW);
 
 }
}
