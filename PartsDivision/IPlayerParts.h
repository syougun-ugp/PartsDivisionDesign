#pragma once
#include <iostream>

class Player;

//	�v���C���[���i�̃C���^�[�t�F�C�X
class IPlayerParts
{
protected:
	IPlayerParts(Player *player) :
		player(player)
	{
		std::cout << "IPlayerParts�@�R���X�g���N�^" << std::endl;
	}

	virtual void Update() = 0;

	Player *player;
};

