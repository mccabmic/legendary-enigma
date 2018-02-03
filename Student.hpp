#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "Person.hpp"
#include <ctime>

using std::rand;

class Student : public Person {
private:
	float GPA;

public:
	Student(string name, int age, float grades);
	
	void do_work();
	void printInfo();

	float getGPA();

};

#endif // !STUDENT_HPP
