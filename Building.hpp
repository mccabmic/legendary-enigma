#ifndef BUILDING_HPP
#define BUILDING_HPP
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Building{

private:
	string name;
	int buildingSize;
	string address;

public:
	Building(string buildingName, string buildingAddress, int area)
		: name(buildingName), address(buildingAddress), buildingSize(area) {};
		
	void setName(string newName);
	
	int getSize();
	string getName();
	string getAddress();

	void printDetails();
};


#endif // !BUILDING_HPP
/*
http://facilities.oregonstate.edu/buildings

*/