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
	string GetName()
	{
		return name;
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
	int eqAmount;
public:
	Backpack()
	{
		cout << "Instantiating a Backpack by default!" << endl;
		eqs = new Equipment[10];
		eqAmount = 10;
	}
	Backpack(int pAmount)
	{
		cout << "Instantiating a Backpack" << endl;
		eqs = new Equipment[pAmount];
		eqAmount = pAmount;
	}
	~Backpack()
	{
		cout << "Destructing a Backpack!" << endl;
		delete[] eqs;
	}
	bool AddEquipment(Equipment *pEq);
};

