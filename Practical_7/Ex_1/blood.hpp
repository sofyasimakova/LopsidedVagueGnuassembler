#include <iostream> 
#include "date.hpp"
#include <stdio.h>

#ifndef blood_hpp 
#define blood_hpp 

class Blood{
  protected: 
      int systolic; 
      int diastolic;
      Date date;
  public:
      Blood(const int, const int, const Date);
      int getSystolic();
      int getDiastolic();
      Date getDate();
      void print();
};
#endif