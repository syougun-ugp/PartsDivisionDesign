#include "IPlayerParts.h"

class Player;

//	�v���C���[�̈ړ����i
class PlayerMove :public IPlayerParts
{
public:
	PlayerMove(Player *player);
	void Update();

private:

};