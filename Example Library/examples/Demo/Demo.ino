#include "LibraryExample.h"

LibraryExample LibraryExampleObject;

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  for(int i = 0; i < 10; i ++)
  {
    LibraryExampleObject.PrintMessage();
  }
}
