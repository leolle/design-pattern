#ifndef SUBJECT_HPP
#define SUBJECT_HPP

class Subject
{
public:
  virtual void registerObserver() = 0;
  virtual void removeObserver() = 0;
  virtual void notifyObserver() = 0;

};

#endif // SUBJECT_HPP
