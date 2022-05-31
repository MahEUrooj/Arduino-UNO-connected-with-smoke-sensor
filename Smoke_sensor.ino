#define smoke A5
void setup() {
  // put your setup code here, to run once:
pinMode (smoke, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int analogSensor = analogRead(smoke);

Serial.print("Value is: ");
Serial.println(analogSensor);

delay(100);
}
