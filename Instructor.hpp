#ifndef INSTRUCTOR_HPP
#define INSTRUCTOR_HPP

#include "Person.hpp"
#include <ctime>

class Instructor:public Person {
private:
	double rating;

public:
	Instructor::Instructor(string name, int age, double score);

	double getRating();

	void do_work();
	void printInfo();

};

#endif // !INSTRUCTOR_HPP