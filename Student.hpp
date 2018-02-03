#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "Person.hpp"

class Student : public Person {
private:
	float GPA;

public:
	Student();
	void do_work();
};

#endif // !STUDENT_HPP

#include "Person.hpp"




/*

Student Class

The Student class contains the following member variable:

GPA, the student’s GPA (double or float data type)
The range for GPA must be between 0.0 and 4.0.

For “do_work()” in Person class, if the Person is a Student, then the function should output the following message:

“PERSON_NAME did X hours of homework.” Where PERSON_NAME is the person’s name, and X is the randomly generated number.


*/

