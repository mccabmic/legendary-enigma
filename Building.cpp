#include "Building.hpp"

string Building::getAddress() {return address;}
string Building::getName() {return name;}
int Building::getSize() {return buildingSize;}

void Building::setName(string newName) {name = newName;}

void Building::printDetails() {
	cout << "Building Name: " << getName() << endl;
	cout << "Building Address: " << getAddress() << endl;
	cout << "Building Size: " << getSize() << endl;
}
