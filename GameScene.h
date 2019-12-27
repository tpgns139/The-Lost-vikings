#pragma once
#include"gameNode.h"
#include "EnemyManager.h"

class GameScene:public gameNode
{
private:

	EnemyManager* _em;
	int count;

	int currentX;

public:
	
	GameScene();
	~GameScene();
	HRESULT init();
	void update();
	void render();
	void release();
};

