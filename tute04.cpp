/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  
}
long factorial(int no)
{
  long value=1;
  int i;
  for(i=no;i>1;i--)
    {
      value=value*1;
    }
  return value;  
}
long nCr(int n,int r)
{
  long nCr;
  nCr=factorial(n)/(factorial(r)*factorial((n-r)));
  return nCr;
}