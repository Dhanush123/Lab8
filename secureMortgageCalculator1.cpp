// Lab 8
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

#include <cmath>

void getPassword()
{
  while (true)
  {
    string password;
    cout << "Enter the password: ";
    getline(cin, password);

    if (password == "pass123") break;
    cout << "INVALID" << endl;
  } // while
} // getPassword

int main()
{
    cout << "Programmer: Dhanush Patel" << endl;
    cout << "Description: This program is a password protected mortgage calculator that allows unlimited password tries." << endl;
    cout << endl;

	getPassword();

	cout << endl;

    int moneyBorrowed = 100000;
    cout << "What's the amount borrowed? ";
    cin >> moneyBorrowed;
    cin.ignore(1000, 10);

    double annualInterestRate;
    cout << "What's the annual interest rate? ";
    cin >> annualInterestRate;
    cin.ignore(1000, 10);

    cout << endl;

    double monthlyInterestRate = annualInterestRate/1200;
    double yearsForPayback = 30;
    double monthsforPayback = yearsForPayback * 12;
    double monthlyPayment = (moneyBorrowed * pow(1+(monthlyInterestRate),monthsforPayback) * monthlyInterestRate)/((pow(1+monthlyInterestRate,monthsforPayback))-1);

    //Show amount borrowed, annual interest rate, payback period, and monthly payment
    cout << "Amount borrowed = $" << moneyBorrowed << endl;
    cout << "Annual interest rate = " << annualInterestRate << "%" << endl;
    cout << "Payback period = " << yearsForPayback << " Years" << endl;
    cout.setf( ios:: fixed | ios:: showpoint);
    cout << setprecision(2);
    cout << "Monthly payment = $" << monthlyPayment << endl;
}
