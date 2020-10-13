// Defining and using structures
#include <iostream>
#include <cstring>
using namespace std;

void print_attributes();

struct C_Plus_Plus{
	char attrib1[10];
};


int main() {
	struct C_Plus_Plus Cpp_struct;

	strcpy(Cpp_struct.attrib1, "Hello");
	
	cout << Cpp_struct.attrib1;
}

