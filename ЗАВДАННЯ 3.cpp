#include <iostream>
#include <string>

using namespace std;

int stringLength(string str) {
	return str.length(); // Uses the 'length' method of the 'string' class
}

int main() {
	string inputString;

	cout << "Enter a string: ";
	getline(cin, inputString); // Reads the entire line of input into 'inputString'

	int length = stringLength(inputString);
	cout << "The length of the string is: " << length << endl;

	return 0;
}
