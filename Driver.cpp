#include <iostream>
#include <fstream>

#include "Grader.h"

using namespace std;

int main() {
	Grader GRADE;

	ofstream outfile;
	outfile.open("Results.txt");

	ofstream outfile2;
	outfile2.open("Driver.txt");

	ifstream infile;
	infile.open("Driver.txt");


	for (int x = -2; x < 103; x++) {
		outfile2 << x << endl;
	}

	outfile2.close();

	int number;

	while (infile) {
		infile >> number;
		GRADE.setGrade(number);
		if (GRADE.getGrade() == '?') {
			continue;
		}
		cout << number << endl;
		outfile << "The grade equivalent of " << number << " is :\t" << GRADE.getGrade() << endl;
	}

	infile.close();
	outfile.close();
}