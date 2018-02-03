#include "University.hpp"


void University::addBuilding(string buildingName, string buildingAddress, int size){
	campus.push_back(new Building(buildingName, buildingAddress, size));
}

void University::addStudent(){

}

void University::addInstructor() {

}

void University::employPerson(Person* ptrPerson) {

	ptrPerson->do_work();

}