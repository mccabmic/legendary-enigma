#include <iostream>
#include "University.hpp"

using namespace std;
int main() {


	cout << "Hello World!" << endl;

	University OSU;

	Building ass("My Building", "123 Fake Street", 325);
	
	Person* guy = new Student("Mike", 31, 4.0);
	Person* anotherGuy = new Student("Mike", 31, 4.0);
	Person* otherGuy = new Instructor("Zhang", 45, 5.0);

	guy->printInfo();
	anotherGuy-> printInfo();

	guy->do_work();
	anotherGuy->do_work();

	otherGuy->printInfo();
	otherGuy->do_work();

	ass.printDetails();

	delete guy;
	delete otherGuy;

	cin.get();
}