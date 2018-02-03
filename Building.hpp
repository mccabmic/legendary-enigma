#ifndef BUILDING_HPP
#define BUILDING_HPP
#include <string>

using std::string;

class Building{

private:
	string name;
	int buildingSize;
	string address;

public:
	Building();
	Building(string buildingName, string buildingAddress, int buildingSize);

	
	void setName(string newName);
	void setAddress(string newAddress);
	void setSize(int newArea);
	
	int getSize();
	string getName();
	string getAddress();
};


#endif // !BUILDING_HPP
/*
http://facilities.oregonstate.edu/buildings

*/