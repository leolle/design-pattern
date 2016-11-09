#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>
#include <stdio.h>
#include "stdlib.h"
#include "DrawWithColor.hpp"
using namespace std;

class Shape
{
protected:

	int m_id;	// protected member may be access from derived class.
  DrawBehavior *drawBehavior;
  Shape(DrawBehavior* d)
  {
    drawBehavior = d;
  }

public:
	// default constructor
	Shape();

	// Copy constructor
	Shape(const Shape& s);

	//Destructor
	~Shape()
	{
    delete drawBehavior;
		//cout << "destructor shape class" << endl;
	};

	virtual std::string ToString() const;	//convert id information to a string
  void performDraw(){
    drawBehavior->draw();
  }
	//get ID
	int ID();
	//virtual void Draw() = 0;
	void Print();

	//operator overloading
	Shape& operator = (const Shape& source); // Assignment operator.

};

ostream& operator << (ostream& os, const Shape& c); // Send to ostream.

#endif
