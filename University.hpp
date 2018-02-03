#ifndef UNIVERSITY_HPP
#define UNIVERSITY_HPP


#include "Person.hpp"
#include "Instructor.hpp"
#include "Student.hpp"
#include "Building.hpp" // building
#include <vector>

using std::string;
using std::vector;

class University {

private:
	const string schoolName = "Oregon State Unviersity";

	vector<Building*> campus;
	vector<Person*> campusPeople;

public:

	void addBuilding(string buildingName, string buildingAddress, int size);
	void addStudent();
	void addInstructor();

	void employPerson(Person* ptrPerson);
};

#endif // !UNIVERSITY_HPP


/*


University Class

The University class contains the following member variables:

name: name of the university.
The name of the university MUST be “Oregon State University”

buildings: contains n number of Building objects
people: contains m number of Person objects
It contains the following member functions:

A function that prints the information on all the buildings in its information system (name, address, and building’s size)
A function that prints the information of all the people (name, age, GPA or Rating)
Note: The information on Building class and Person class are described below.

Note: When printing information of all people, you need to distinguish instructors and students by print either a “GPA” or “Rating”.*/
