#pragma once
#include"gameNode.h"
#include"PlayerManager.h"
#include "itemManager.h"
#include "Shoes.h"
#include "Key.h"
#include "Fruit.h"
#include "Meat.h"
class GameScene:public gameNode
{
private:
	int count;
	PlayerManager* _playerManager;
	int currentX;
	itemManager* _im;
public:
	
	GameScene();
	~GameScene();
	HRESULT init();
	void update();
	void render();
	void release();
};

