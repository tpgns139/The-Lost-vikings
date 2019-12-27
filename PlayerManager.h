#pragma once
#include "Player.h"
<<<<<<< HEAD
#include "Erik.h"

=======
#include "Baleog.h"
>>>>>>> 6c35325ced9e672e524765ac8e11232dcc70c874
class PlayerManager
{
private:
	vector<Player*> _vPlayer;

	


public:
	PlayerManager();
	~PlayerManager();

	HRESULT init();
	void update();
	void render();
};

