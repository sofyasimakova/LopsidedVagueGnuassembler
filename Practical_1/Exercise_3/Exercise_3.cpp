#include <iostream>
using namespace std;

int main()
{
  int num1, num2;
  cout << "Exercise 3 : is a number multiple of another one ?" << endl;
  cout << "Type two integers: " << endl;
  std::cin >> num1 >> num2;
  if(num1%num2 == 0)
    cout << "First number is a multiple of the second number" << endl;
  else
    cout << "First number is NOT a multiple of the second number" << endl;
  cout << endl;

  return 0; 
}

