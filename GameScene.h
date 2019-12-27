#pragma once
#include"gameNode.h"
#include"PlayerManager.h"
class GameScene:public gameNode
{
private:
	int count;
	PlayerManager* _playerManager;
	int currentX;

public:
	
	GameScene();
	~GameScene();
	HRESULT init();
	void update();
	void render();
	void release();
};

