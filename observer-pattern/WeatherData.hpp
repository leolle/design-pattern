#ifndef WEATHERDATA_HPP
#define WEATHERDATA_HPP

#include <iostream>
#include <stdio.h>
#include "stdlib.h"
#include <vector>
#include <algorithm>
#include "Subject.hpp"
#include "Observer.hpp"
using namespace std;

class WeatherData
{
private:
  std::vector<Observer *> observers;
  int temperature;
  int humidity;
  int pressure;
protected:

	//int m_id;	// protected member may be access from derived class.


public:
	// default constructor
	WeatherData();

	// Copy constructor
	WeatherData(const WeatherData& w);

	//Destructor
	~WeatherData()
	{
    // delete subject;
		//cout << "destructor shape class" << endl;
	};
  //void WeatherData();

  void registerObserver(Observer *ob);
  void removeObserver(Observer *ob);
  void notifyObserver(Observer *ob);

  double getTemperature();
  double getHumidity();
  double getPressure();
  void measurementsChanged();
	//virtual std::string ToString() const;	//convert id information to a string
  // void performDraw(){
  //   subject->draw();
  // }
	//get ID
	//int ID();
	//virtual void Draw() = 0;
	//void Print();

	//operator overloading
	WeatherData& operator = (const WeatherData& source); // Assignment operator.

};

ostream& operator << (ostream& os, const WeatherData& c); // Send to ostream.

#endif
