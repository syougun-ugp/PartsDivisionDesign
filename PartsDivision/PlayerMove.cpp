#include "PlayerMove.h"
#include "Player.h"


PlayerMove::PlayerMove(Player *player) :
IPlayerParts(player)
{
	std::cout << "PlayerMove　コンストラクタ" << std::endl;
}

void PlayerMove::Update()
{
	std::cout << "PlayerMove Update()" << std::endl;
	player->transform.Translate(Vector2(10, 0));
}
