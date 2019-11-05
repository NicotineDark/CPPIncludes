#include <iostream>
using namespace std;
class Player
{
// Class variables
public:
	string playerName;
	int playerLevel;

// Class methods
	Player(string pName, int pLevel);
	Player();
	~Player();
	void CopyPlayer(Player pPlayer);



};

