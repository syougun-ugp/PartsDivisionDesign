#pragma once
#include <iostream>

class Player;

//	プレイヤー部品のインターフェイス
class IPlayerParts
{
protected:
	IPlayerParts(Player *player) :
		player(player)
	{
		std::cout << "IPlayerParts　コンストラクタ" << std::endl;
	}

	virtual void Update() = 0;

	Player *player;
};

