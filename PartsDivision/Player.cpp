#include "Player.h"
#include "PlayerMove.h"

Player::Player() :
transform(Transform())
{
	std::cout << "Player コンストラクタ" << std::endl;
}

Player::~Player()
{
	delete move;
}

//	プレイヤー部品の初期化
void Player::InitPlayerParts(Player *player)
{
	move = new PlayerMove(player);
}

void Player::Update()
{
	std::cout << "Player Update()" << std::endl;

	move->Update();

	std::cout << "Player_PosX : " << transform.Position().x << std::endl;
	std::cout << "Player_PosY : " << transform.Position().y << std::endl;
}
