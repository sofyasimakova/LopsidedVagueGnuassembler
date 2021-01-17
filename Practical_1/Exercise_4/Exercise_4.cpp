#include <iostream>
using namespace std;

int main()
{
  cout << "Exercise 4 : Display a line of characters" << endl;
  cout << "Type a number: " << endl;
  int n;
  cin >> n;
    while (n > 0) {
        cout << "*";
        n-=1;
        }
        cout << endl;
  return 0; 
}

