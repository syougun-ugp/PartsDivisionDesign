#include "IPlayerParts.h"

class Player;

//	プレイヤーの移動部品
class PlayerMove :public IPlayerParts
{
public:
	PlayerMove(Player *player);
	void Update();

private:

};