#include <iostream>
using namespace std;

unsigned int Factorial( unsigned int number ) {
  return number <= 1 ? number : Factorial(number-1)*number;
}

int main() 
{
  cout << "Factorial of 5: " << Factorial(5) << endl;
  return 0;
}
