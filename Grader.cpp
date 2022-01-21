#include "Grader.h"

Grader::Grader() {
	grade = ' ';
}

void Grader::setGrade(int number) {
	if (number >= 90 && number <= 100) {
		grade = 'A';
	}
	else if (number >= 80 && number < 90) {
		grade = 'B';
	}
	else if (number >= 70 && number < 80) {
		grade = 'C';
	}
	else if (number >= 60 && number < 70) {
		grade = 'D';
	}
	else if (number >= 0 && number < 60) {
		grade = 'F';
	}
	else
		grade = '?';
}

char Grader::getGrade() {
	return grade;
}