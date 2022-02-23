/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n-r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);  //variable declation
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n "; //get inputs from users
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  
  return 0;
}
long Factorial(int no)  //factorial find function
{
    int fac=1;
    for (int i=no;i>=1;i--)
      {
        fac=i*fac;
      }
      return fac;
}
long nCr(int n, int r)  //nCr find function
{
return Factorial(n) / (Factorial(r)*Factorial(n-r));
  
}

