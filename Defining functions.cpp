#include <iostream>
using namespace std;

// Function declaration
int this_is_a_function();

// Function definition
int this_is_a_function(int a, int b){
	return a + b;
}

int main() {
	cout << "Now I am calling the function" << endl; // This endl keyword skips a line
	cout << this_is_a_function(10,20);
}


