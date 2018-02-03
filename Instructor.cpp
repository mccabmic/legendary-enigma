#include "Instructor.hpp"

Instructor::Instructor(string name, int age, double rank) : Person(name, age) {

	srand(time(0));
	if (rank < 0.0)
		rating = 0.0;
	else if (rank > 5.0)
		rating = 5.0;
	else
		rating = rank;
}
double Instructor::getRating() { return rating; }

void Instructor::do_work() {
	int work = rand() % 24;
	cout << name << " graded papers for "<< work <<" hours." << endl;
}
void Instructor::printInfo() {
	cout << "Name: " << getName() << endl;
	cout << "Age: " << getAge() << endl;
	cout << "Rating: " << getRating() << endl;
	}
