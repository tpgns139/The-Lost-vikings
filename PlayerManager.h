#pragma once
#include "Player.h"
#include "Erik.h"

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

