//File: manager.h
//Manager class definition.



#ifndef _SUPERVISOR_H
#define _SUPERVISOR_H

#include "manager.h"
#include "employee.h"

class Supervisor : public Employee{
public:
  Supervisor(string theName,
          float thePayRate,
          string theDept);

  bool getSalaried() const;
  string getDept() const;
  void setDept(string theDept);

  //void setPayRate(float newPayRate);

  //float pay(float hoursWorked) const;
 // float setPayRate(float thePayRate);
  float pay(float hoursWorked) const;

protected:
  string dept;
  bool salaried = true;
  //float payRate;
};


//Manager method definitions.



Supervisor::Supervisor(string theName,
                 float thePayRate,
                 string theDept)
  : Employee(theName, thePayRate)
{
  dept = theDept;
}

bool Supervisor::getSalaried() const
{
  return true;
}




string Supervisor::getDept() const
{
  return dept;
}

void Supervisor::setDept(string theDept)
{

    dept =  theDept;
}

float Supervisor::pay(float hoursWorked) const
{
  return hoursWorked*payRate;
}

/*
float Supervisor::setPayRate(float thePayRate)
{

    return thePayRate;
}
*/
#endif // not defined _MANAGER_H

