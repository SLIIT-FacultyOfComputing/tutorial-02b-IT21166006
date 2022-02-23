/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

/*#include <stdio.h>
int main()
{
   double salary, netSalary;
   int etype, otHrs, otRate;
   printf("Enter Employee Type : ");
   scanf("%d", &etype);
   printf("Enter Salary  : ");
   scanf("%f", &salary);
   printf("Enter OtHrs : ");
   scanf("%d", &otHrs); 
   
   switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }


   netSalary = salary + otHrs* otRate;
   printf("Net Salary is %f ", netSalary);
  
   return 0;
}*/

#include <iostream>
using namespace std;
int main()
{
  double salary, netSalary; //variable declaration 
  int etype, otHrs, otRate;

  cout<<"Enter Employee Type:"; //get inputs emp.type
  cin >> etype;
  
  cout<< "Enter Salary:";  //get inputs salary
  cin >> salary;
  
  cout<<"Enter OtHrs : ";  //get inputs othours
  cin >>otHrs; 

  switch (etype) {  //if condition
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }
  netSalary = salary + otHrs* otRate;  //calculation
  cout << "Net Salary is:"  << netSalary;  //output

  return 0;
}
