#include <iostream>
#include "Transform.hpp"

class PlayerMove;

class Player
{
public:
	Player();
	~Player();
	//	プレイヤー部品の初期化
	void InitPlayerParts(Player *player);

	void Update();

	Transform transform;
private:
	PlayerMove *move;
};

