int redPin = 9;
int greenPin = 10;
int bluePin = 11;

int red = 0;
int green = 0;
int blue = 0;

bool dir = 1;
int i = 0;

int pins[] = {redPin, greenPin, bluePin};
int rgb[] = {red, green, blue};

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (rgb[i] < 255 && dir == 1)
  {
    rgb[i] ++;    
  }
  else if (rgb[i] > 0 && dir == 0)
  {
    rgb[i] --;
  }
  else
  {
    if(dir == 0)
    {
      if(i < 2)
      {
        i++;
      }
      else
      {
        i = 0;
      }
    }
    dir = !dir;
  }
  analogWrite(pins[i], rgb[i]);

  //setColour(red,green,blue);
  delay(10);

}

void setColour(int r,int g, int b)
{
    analogWrite(redPin, r);
    analogWrite(greenPin, g);
    analogWrite(blue, b);

}

