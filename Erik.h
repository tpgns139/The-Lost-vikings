#pragma once
#include "gameNode.h"
#include "Player.h"



enum LR
{
	LEFT,
	RIGHT
};


class Erik:public Player
{
private:




public:
	Erik();
	~Erik();

	virtual HRESULT init();
	virtual void release();
	virtual void update();
	virtual void render();
	
};


