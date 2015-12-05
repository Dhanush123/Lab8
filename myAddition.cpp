// Lab 8
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <iostream>
using namespace std;

#include <ctime>
#include <cstdlib>

void additionProblem(int topNumber, int bottomNumber)
{
  int userAnswer;
  cout << "\n\n\n      " << topNumber << " + " << bottomNumber << " = ";
  cin >> userAnswer;
  cin.ignore(1000, 10);

  int theAnswer = topNumber + bottomNumber;
  if (theAnswer == userAnswer)
    cout << "      Correct!" << endl;
  else
    cout << "      Very good, but a better answer is " << theAnswer << endl;

} // additionProblem

int main()
{
	 srand(time(0));

	 cout << "Programmer: Dhanush Patel" << endl;
	 cout << "Description: This program randomly generates addition problems to be solved." << endl;
	 cout << endl;

	 for (int i = 0; i < 5; i++){
		 int x = 1 + (rand() % 10);
		 int y = 1 + (rand() % 10);
		 additionProblem(x, y);
	 }
} // main
