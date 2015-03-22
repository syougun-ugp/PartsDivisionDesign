#include "Player.h"


int main()
{
	Player* player;

	player = new Player();

	player->InitPlayerParts(player);
	player->Update();

	delete player;

	return 0;
}


