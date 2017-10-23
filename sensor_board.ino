int analogpin1 = 1;
int analogpin2 = 2; 
int analogpin3 = 3; 
int analogpin4 = 4; 

int sensor1val = 0;
int sensor2val = 0;
int sensor3val = 0;
int sensor4val = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

sensor1val = analogRead(analogpin1);
  Serial.print(millis());
  Serial.print("CNPR");
  Serial.println(sensor1val,5);

sensor2val = analogRead(analogpin2);
  Serial.print(millis());
  Serial.print("CNPW");
  Serial.println(sensor2val,5);

  sensor3val = analogRead(analogpin3);
  Serial.print(millis());
  Serial.print("CNCR");
  Serial.println(sensor3val,5);

  sensor4val = analogRead(analogpin4);
  Serial.print(millis());
  Serial.print("CNCW");
  Serial.println(sensor4val,5);
  
  delay(100);

}
