#include <iostream>
using namespace std;

int main()
{
  int num1, num2;
  cout << "Exercise 1 : Program 0" << endl;
  cout << "Welcome to C++!" << endl;
  cout << endl;
  cout << "Exercise 2 : Read in 2 integers and display their product" << endl;
  cout << "Type two integers: " << endl;
  std::cin >> num1 >> num2;
  cout << "The product is:" << endl;
  std::cout << num1*num2 << endl;
  cout << endl;
  cout << "Exercise 3 : is a number multiple of another one ?" << endl;
  cout << "Type two integers: " << endl;
  std::cin >> num1 >> num2;
  if(num1%num2 == 0)
    cout << "First number is a multiple of the second number" << endl;
  else
    cout << "First number is NOT a multiple of the second number" << endl;
  cout << endl;
  cout << "Exercise 4 : Display a line of characters" << endl;
  cout << "Type a number: " << endl;
  int n;
  cin >> n;
    while (n > 0) {
        cout << "*";
        n-=1;
        }
        cout << endl;
  cout << endl;
  cout << "Exercise 5 : Factorial" << endl;
  int num,fact=1, i=1;
	cout<<"Enter Number To Find Its Factorial:  ";
	cin>>num;
  while(i<=num){
    fact=fact*i;
    i+=1;
    }
  cout<<"Factorial of Given Number is "<<fact<<endl;
  cout << endl;
  cout << "Exercise 6 : Nested loops" << endl;

  return 0; 
}

