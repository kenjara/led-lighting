int red = 9;
int green = 10;
int blue = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(red, 255);
  delay(1000);
  analogWrite(green, 255);
  delay(1000);
  analogWrite(blue, 255);
  delay(1000);
  analogWrite(red, 0);
  delay(1000);
  analogWrite(green, 0);
  delay(1000);
  analogWrite(blue, 0);
  delay(1000);

}
