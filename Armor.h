#include "Equipment.h"
class Armor :
	public Equipment
{
private:
	int protection;

public:
	Armor(string pName, double pWeight, int pProt);
	Armor();
};
