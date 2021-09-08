#include <iostream>
using namespace std;

int main() {

	//variables to track the integers we use, and the operand
	int x, y;
	char c;

	//stores the result of the operation
	int result;

	//prompts the user for the equation
	cout << "Please input an integer, and operand, and an integer";
	cout << "Ex: 1 + 1 \n";
	cin >> x >> c >> y;

	//turns the operand char into an int
	int c2 = int(c);
	
	switch (c2) {

		//case for addition
		case (43):
			result = x + y;
			cout << x << " " << c << " " << y << " = " << result; 
			break;

		//case for subtraction
		case (45):
			result = x - y;
			cout << x << " " << c << " " << y << " = " << result;
			break;

		//case for multiplication
		case (42):
			result = x * y;
			cout << x << " " << c << " " << y << " = " << result;
			break;

		//case for division
		case (47):
			result = x / y;
			cout << x << " " << c << " " << y << " = " << result;
			break;
			
	}

	cout << "\n";
	
	//the number of stars that will be printed
	int numStars = result;

	//makes sure numStars is less than 6
	if (numStars > 5) {
		numStars = 5;
	}

	//prints the amount of stars
	for (int i = 0; i < numStars; i++) {
		cout << "*";
	}
	
	cout << "\n";

	//string to sense the YN input from the user
	string input;

	//prompt the user to stop or keep going
	cout << "Would you like to run another calculation \n" << "Y for yes, N for no \n";

	while (true) {
		
		//takes the input from the user
		cin >> input;

		//if yes, will run the whole sequence again
		if (input == "Y") {
			main();
			break;
		}
		//if N, the loop ends, which will end the program
		else if (input == "N") {
			break;
		}
		//if its not Y or N, asks again
		else {
			cout << "Please input Y or N \n";
		}


	}
}