#include "Student.hpp"

Student::Student(string name, int age, float grades): Person(name, age) {

	srand(time(0));

	if (grades < 0.0)
		GPA = 0.0;
	else if (grades > 4.0)
		GPA = 4.0;
	else
		GPA = grades;
}

void Student::do_work() {
	int work =  rand() % 16;
	cout << getName() << " did " << work << " hours of homework." << endl;
}

void Student::printInfo() {
	cout << "Name: " << getName() << endl;
	cout << "Age: " << getAge() << endl;
	cout << "Grades: " << getGPA() << endl;
}

float Student::getGPA() { return GPA; }

