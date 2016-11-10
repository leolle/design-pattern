#ifndef OBSERVER_HPP
#define OBSERVER_HPP


#include <iostream>
#include "Subject.hpp"

class Observer: public Subject
{
public:
  void update(float temperature, float humidity, float pressure)
  {
    std::cout << "new data updated." << std::endl;
  }
};

#endif
