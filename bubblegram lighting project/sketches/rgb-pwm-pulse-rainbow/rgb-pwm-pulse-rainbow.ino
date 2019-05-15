//
// Copyright (c) Shane Powell. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for details.
//

const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

// Delay
const int delayBetweenIncrements = 100;

const int delayAtMaxBrightness = 10000;

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

}

void loop() {
  // put your main code here, to run repeatedly:
  if (rgb < 255 && dir == 1)
  {
    rgb ++;    
  }
  else if (rgb > 10 && dir == 0)
  {
    rgb --;
  }
  else
  {
    // If reducing wave size then switch to next colour
    if(dir == 0)
    {
      if(i < pinCount)
      {
        // Move onto next colour in array    
        i++;
      }
      else
      {
        // If at end of array return to beginning
        i = 0;
      }
    }
    else
    {
      // Max brightness hit
      delay(delayAtMaxBrightness);
    }
    dir = !dir;
  }

  writePins(pins[i], rgb);

  delay(delayBetweenIncrements);

}

void writePins(int colourPins[], int pulseWidth)
{  
  for(int i = 0; i < 3; i++)
  {
    analogWrite(colourPins[i], pulseWidth);
  }
}


