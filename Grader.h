#ifndef GRADER_H
#define GRADER_H

#include <iostream>
#include <string>

using namespace std;

class Grader {
public:
	Grader();

	void setGrade(int number);
	char getGrade();

private:
	char grade;

};

#endif
