int redPin = 9;
int greenPin = 10;
int bluePin = 11;

int red = 0;
int green = 0;
int blue = 0;

bool dir = 1;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  if (red < 255 && dir == 1)
  {
    red ++;    
  }
  else if (red > 0 && dir == 0)
  {
    red --;
  }
  else
  {
    dir = !dir;
  }
  

  setColour(red,green,blue);
  delay(10);

}

void setColour(int r,int g, int b)
{
    analogWrite(redPin, r);
    analogWrite(greenPin, g);
    analogWrite(blue, b);

}

