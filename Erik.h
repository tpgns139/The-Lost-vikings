#pragma once
#include "gameNode.h"
#include "Player.h"


struct ErikInfo
{
	image* img;
	POINT pos;//ÁÂÇ¥°ª position;
	RECT rc;
	int count;
	int currentFrameX;
	int currentFrameY;
	LR _LR;

};

enum LR
{
	LEFT,
	RIGHT
};


class Erik:public Player
{
private:

	ErikInfo _erik;


public:
	Erik();
	~Erik();

	virtual HRESULT init();
	virtual void release();
	virtual void update();
	virtual void render();
	
};


