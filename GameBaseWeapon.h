#include <iostream>
using namespace std;

class Equipment
{
private:
	string name;
	double weight;

public:
	Equipment(string pName, double pWeight)
	{
		name = pName;
		weight = pWeight;
	}
	Equipment()
	{
		name = "";
		weight = 0.0;
	}
};

class Weapon :
	public Equipment
{
private:
	int damage;

public:
	Weapon(string pName, double pWeight, int pDam);
	Weapon();
};
