#include <stdio.h>
#include <string.h>
#include <iostream>
#include "point.hpp"
#include <sstream>
//#include "lineSegment.hpp"
//#include "circle.hpp"
#include "shape.hpp"
//#include "array.hpp"

using namespace std;

//implement both exception classes in the array header file for simplicity
int main()
{
	//Array cArray(3);	//index starts from 0, size is 3

	//try...catch block
  Shape* s1 = new Point();
  s1->performDraw();
	return 0;
}
