#include <iostream>
using namespace std;

int main()
{
  cout << "Exercise 5 : Factorial" << endl;
  int num,fact=1, i=1;
	cout<<"Enter a Number: ";
	cin>>num;
  while(i<=num){
    fact=fact*i;
    i+=1;
    }
  cout<<"Factorial of Given Number is: "<<fact<<endl;

  return 0; 
}

