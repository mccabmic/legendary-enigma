#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
using std::string;

class Person {
protected:
	string name;

public:
	Person();
};

#endif // !PERSON_HPP

/*

Person Class

Person class is polymorphic, a Person pointer can hold an Instructor/Student object.

The Person class contains the following member variables:

name: name of the person
age: age of the person
The age of a person can be randomized or from input, but make it realistic

The Person class contains the following member function:

A function called “do_work()” that generates a random number that represents how many hours they will do work for, and then output message depending on if the Person is a Student or an Instructor.

Note: You can find more information on what message to output below.

Note: You can set a range for the random number to make the working hours look reasonable.*/