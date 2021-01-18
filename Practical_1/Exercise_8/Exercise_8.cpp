#include<iostream>
#include<cmath>

using namespace std;

// function that computes the approximation of PI as the 
// the sum of the first n-terms of the series 
// PI_n = \sum_{j=0}^n (-1)^j * 4/(2j-1)
double pi_approx_n(int n){
  double pi = 0.0;
  
  for(int j=0;j<=n;j++){
    pi += pow(-1,j)*4/(2*j+1);
  }
  return pi;
}

// function that computes the index n such that difference 
// between the n-th and the (n-1)-th terms of 
// PI_n = \sum_{j=0}^n (-1)^j * 4/(2j-1)
// the sum  of the series is less than a given tolerance epsilon 
// passed as parameters
int pi_approx_epsilon(double epsilon, double& p){
  int n1 = 0;
  double pi=0.0;
  double pi_prime;
  pi_prime = pi_approx_n(n1); 
  pi = pi_approx_n(++n1); 
  double delta = abs(pi - pi_prime);

  while(delta>=epsilon){
    pi_prime = pi;
    pi = pi_approx_n(++n1); 
    delta = abs(pi - pi_prime);
    //cout << "delta:" << delta << endl;
  }
  p=pi;
  return n1;
}



int main(){
  int n = 0; //  the index to stop the sum
  int n1 = 0; // the number of iterazions computed to meet the tolerance epsilon
  double pi = 0.0; // the computed approximation of PI
  
  
  cout << "Program to approximate  PI" << endl;
  // the user choses the method for approximating PI
  cout << "what kind of approximation you want? (1:approx_n, 2:approx_epsilon)" << endl;
  cin >> n;

  // the n-th SUM approximation has been chosen
  if(n==1){
    cout << "enter the number of iterations for your approximation:";
    cin >> n1;
    pi = pi_approx_n(n1);
    cout << "the n=" << n1 ; 
  }

  // the epsilon tolerance  approximation has been chosen
  else if(n==2){
    double epsilon; 
    cout << "enter the value of epsilon for your approximation:";
    cin >> epsilon;
    n1 = pi_approx_epsilon(epsilon,pi);
    cout << "the epsilon =" << epsilon ; 
  }
  
  // display the computed approximation of PI
  cout.precision(20);
  cout << " approximation of PI is: " << pi <<  endl;
  if(n==2){
    cout << "(resulting from " << n1 << " iterations)" << endl;
  }
  return 0;
}