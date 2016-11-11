#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include "Observer.hpp"

class Subject
{
public:
  virtual void registerObserver(Observer* ob) = 0;
  virtual void removeObserver(Observer* ob) = 0;
  virtual void notifyObserver() = 0;

};

#endif // SUBJECT_HPP
