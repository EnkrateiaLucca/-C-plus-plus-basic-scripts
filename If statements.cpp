// If statements
#include <iostream>
using namespace std;

int main() {
	int random_number;
	int guess;
	cout << "Write a number from 1 to 10";
	cin >> random_number;
	cout << "Guess the number";
	cin >> guess;

	if(random_number==guess)
		cout << "You guessed the number" << endl;
	
	else 
		cout << "Sorry try again!";
	
	
}




