#pragma once
#include"gameNode.h"
#include"PlayerManager.h"
#include "Erik.h"

class GameScene:public gameNode
{
private:
	int count;
	PlayerManager* _playerManager;
	int currentX;

	Erik* _erik;

public:
	
	GameScene();
	~GameScene();
	HRESULT init();
	void update();
	void render();
	void release();
};

