#include "Equipment.h"
class Weapon :
	public Equipment
{
private:
	int damage;

public:
	Weapon(string pName, double pWeight, int pDam);
	Weapon();
};
