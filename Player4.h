#pragma once
#include <iostream>
using namespace std;
class Player
{
// Class variables
private:
	string playerName;
	int playerLevel;

public:
// Class methods
	Player(string pName, int pLevel);
	Player();
	~Player();
	void CopyPlayer(Player pPlayer);
	string GetName();
	int GetLevel();
};

