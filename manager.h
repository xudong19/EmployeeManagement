//File: manager.h
//Manager class definition.



#ifndef _MANAGER_H
#define _MANAGER_H

#include "employee.h"

class Manager : public Employee {
public:
  Manager(string theName,
          float thePayRate,
          bool isSalaried);

  bool getSalaried() const;

  float pay(float hoursWorked) const;
  void setSalaried(bool newSalaried);

protected:
  bool salaried;
};


//Manager method definitions.



Manager::Manager(string theName,
                 float thePayRate,
                 bool isSalaried)
  : Employee(theName, thePayRate)
{
  salaried = isSalaried;
}

bool Manager::getSalaried() const
{
  return salaried;
}

float Manager::pay(float hoursWorked) const
{
  if (salaried)
    return payRate;
  // else
  return Employee::pay(hoursWorked);
}

void Manager::setSalaried(bool newSalaried)
{

    salaried =  newSalaried;
}


#endif // not defined _MANAGER_H

