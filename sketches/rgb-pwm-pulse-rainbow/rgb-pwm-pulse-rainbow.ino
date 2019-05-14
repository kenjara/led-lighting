int redPin = 9;
int greenPin = 10;
int bluePin = 11;

int red = 0;
int green = 0;
int blue = 0;

bool dir = 1;
int i = 0;

int pins[][3] = {{redPin,3,3}, {greenPin,3,3}, {bluePin,3,3}, {redPin, greenPin,3}, {redPin, bluePin,3}, {bluePin, greenPin,3}, {redPin, greenPin, bluePin}};
const int pinCount = 6;
int rgb = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
    Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (rgb < 255 && dir == 1)
  {
    rgb ++;    
  }
  else if (rgb > 0 && dir == 0)
  {
    rgb --;
  }
  else
  {
    if(dir == 0)
    {
      if(i < pinCount)
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

  writePins(pins[i], rgb);

  delay(10);

}

void writePins(int colourPins[], int pulseWidth)
{  
  for(int i = 0; i < 3; i++)
  {
    analogWrite(colourPins[i], pulseWidth);
  }
}


