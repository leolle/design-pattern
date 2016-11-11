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

class WeatherData: public Subject
{
private:
  std::vector<Observer *> observers;
  double temperature;
  double humidity;
  double pressure;
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
  void notifyObserver();

  double getTemperature();
  double getHumidity();
  double getPressure();
  void measurementChanged();
  void setMeasurement(double t, double h, double p);

	WeatherData& operator = (const WeatherData& source); // Assignment operator.

};

ostream& operator << (ostream& os, const WeatherData& c); // Send to ostream.

#endif
