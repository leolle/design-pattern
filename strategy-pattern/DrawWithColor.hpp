#ifndef DRAWWITHCOLOR_HPP
#define DRAWWITHCOLOR_HPP


#include <iostream>
#include "DrawBehavior.hpp"

class DrawWithColor: public DrawBehavior
{
public:
  void draw()
  {
    std::cout << "perform draw with color" << std::endl;
  }
};

#endif
