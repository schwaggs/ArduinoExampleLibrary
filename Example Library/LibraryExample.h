#ifndef LibraryExample_H
#define LibraryExample_H

#include "Arduino.h"

class LibraryExample
{
  public:
    LibraryExample();
    void PrintMessage();

  private:
    char * _message;
};

#endif
