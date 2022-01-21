/*
Caleb Hemmestad
Data Structures
Due: Jan 24 2022
Discription:
CH.1 PG.66 Q.23 A-C.

23. A program is to read a numaric score [0 to 100] and display an appropriate letter grade [A,B,C,D, or F].

	A) What is the functional domain of this program?
	The functional domain are the numbers 0 through 100. Below 0 and above 100 would be invalid inputs.

	B) Is exhaustive data coverage possible for this program?
	It's possible since 100 isn't an insane amount but it would be very impractical and time consuming.

	C) Devise a test plan for this program. vvv

Also make a test driver for the program.


#include <iostream>

using namespace std;

int main() {

	int number;
	for (int x = -2; x <= 110; x++) {
		cout << x << " : ";
		number = x;
		if (!cin) {
			return 0;
		}

		if (number >= 90 && number <= 100) {
			cout << "A" << endl;
		}
		else if (number >= 80 && number < 90) {
			cout << "B" << endl;
		}
		else if (number >= 70 && number < 80) {
			cout << "C" << endl;
		}
		else if (number >= 60 && number < 70) {
			cout << "D" << endl;
		}
		else if (number >= 0 && number < 60) {
			cout << "F" << endl;
		}
		else
			cout << "Invalid input" << endl;
	}

	return 0;
}
*/