int pin_motor = 3;
float motor;
void setup()
{
  Serial.begin(1000);
}

void loop()
{
  motor = analogRead(A0)/4;
  analogWrite(pin_motor, motor);
  Serial.print("motor: ");
  Serial.println(motor);
}