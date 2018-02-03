#ifndef INSTRUCTOR_HPP
#define INSTRUCTOR_HPP

#include "Person.hpp"

class Instructor:public Person {
private:
	double rating;

public:
	Instructor();

	double getRating();
	void setRating(double feedback);
	void do_work();

};
#endif // !INSTRUCTOR_HPP

/*

Instructor Class

The Instructor class contains the following member variable:

rating, the instructor’s rating (double or float data type)
The range for rating must be between 0.0 and 5.0.

For “do_work()” in Person class, if the Person is an Instructor, then the function should output the following message:

“PERSON_NAME graded papers for X hours.” Where PERSON_NAME is the person’s name, and X is the randomly generated number.

*/