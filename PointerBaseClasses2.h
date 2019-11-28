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
	Armor(string pName, double pWeight, int pProt)
		: Equipment(pName, pWeight)
	{
		protection = pProt;
	}
	Armor()
		: Equipment()
	{
		protection = 0;
	}
};
class Weapon :
	public Equipment
{
private:
	int damage;

public:
	Weapon(string pName, double pWeight, int pDam)
		: Equipment(pName, pWeight)
	{
		damage = pDam;
	}
	Weapon()
		: Equipment()
	{
		damage = 0;
	}
};
class Backpack
{
private:
	Equipment* eqs;
public:
	Backpack();
	Backpack(int pAmount);
	~Backpack();
};
