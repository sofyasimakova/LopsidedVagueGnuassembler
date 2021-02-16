#include <iostream> 
#include <vector>
#include <stdio.h>

#include "blood.hpp"
#include "date.hpp"


#ifndef patient_hpp
#define patient_hpp 

using namespace std; 

class Patient{

  protected:
    string name;
    vector<Blood> table;
    
  public:
    Patient(string);
    void addRecord(Blood);
    void print();
    void printReport();

};