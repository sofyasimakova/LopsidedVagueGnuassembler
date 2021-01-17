#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  std::cout << "n: ";
  std::cin >> n;
  for (int i=n; i>= 1;i--){
    for (int j=i; j>0; j--){
      cout << "*";
    }
    cout << endl;
}
}