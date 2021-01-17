#include<iostream>

using namespace std;

int main(){
  double min=__DBL_MAX__; // stores the MIN value (initialised to the maximum value for a double, corresponding to the constant __DBL_MAX)
  double max=__DBL_MIN__; // stores the MAX value (initialised to the minimum value for a double, corresponding to the constant __DBL_MIN)
  double d = 0.0; // store the last value entered by the user

  // loop for input of 10 values
  for(int i=1;i<=10;i++){
    cout << "enter a real value:" << endl;
    cin >> d; // the next value is entered and stored in d
    if(d<min){
      min = d; // the min is updated is the last entered value is smaller 
    }
    if(d>max){
      max=d; // the max is updated is the last entered value is larger 
    }
  }

  // display the  MIN and MAX values entered by the user
  cout.precision(5);
  cout << "the MIN is:" << min <<  endl;
  cout << "the MAX is:" << max <<  endl;

}