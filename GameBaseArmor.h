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

class Armor :
	public Equipment
{
private:
	int protection;

public:
	Armor(string pName, double pWeight, int pProt);
	Armor();
};
