#include <iostream>
#include "Transform.hpp"

class PlayerMove;

class Player
{
public:
	Player();
	~Player();
	//	�v���C���[���i�̏�����
	void InitPlayerParts(Player *player);

	void Update();

	Transform transform;
private:
	PlayerMove *move;
};

