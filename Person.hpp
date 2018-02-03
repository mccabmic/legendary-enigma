#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Person {
	protected:
		string name;
		int age;

	public:
		Person(string personName, int personAge) : name(personName), age(personAge) {};
		virtual void do_work() = 0;
		virtual void printInfo() = 0;

		int getAge();
		string getName();

};

#endif // !PERSON_HPP
