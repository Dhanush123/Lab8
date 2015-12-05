// Lab 8
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <iostream>
#include<string>
using namespace std;

void question(string question, string answer){
	 while (true)
	  {
	    string input;
	    cout << question;
	    getline(cin, input);

	    if (input == answer){
	    	cout << "Correct!" << endl;
	    	cout << endl;
	    	break;
	    }
	    else{
	    cout << "Incorrect!" << endl;
	    cout << endl;
	    break;
	    }
	  } // while
}

int main() {

	cout << "Programmer: Dhanush Patel" << endl;
	cout << "Description: This program gives a correct/incorrect output based on user response to 3 questions." << endl;
    cout << endl;

    question("1. What company made the iPhone? ","Apple");
    question("2. Which company makes the Android OS? ","Google");
    question("3. What year was the Model X released? ","2015");
}
