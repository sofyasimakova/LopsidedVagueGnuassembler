#include <iostream>
#include <stdio.h>

#ifndef date_hpp
#define date_hpp 

using namespace std;

class Date{
    protected: 
        int day, month, year;
    public:
        Date(const int, const int, const int){
        int getDay();
        int getMonth();
        int getYear();
        void print();
        
};
#endif 
