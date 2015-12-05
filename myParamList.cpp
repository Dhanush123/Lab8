// Lab 8
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <iomanip>
#include <iostream>
using namespace std;

double calcAverage(int a, int b, int c)
{
 return (a + b + c) / 3.0;
} // calcAverage

int main()
{
  cout << "Programmer: Dhanush Patel" << endl;
  cout << "Description: This program calculates an average of 3 user-specified numbers." << endl;
  cout << endl;

  int x, y, w;
  cout << "Enter the first whole number : ";
  cin >> x;
  cout << "Enter the first whole number : ";
  cin >> y;
  cout << "Enter the first whole number : ";
  cin >> w;
  double z = calcAverage(x, y, w);
  cout.setf(ios::fixed);
  cout << setprecision(2);
  cout << "The average is " << z << endl;
} // main

