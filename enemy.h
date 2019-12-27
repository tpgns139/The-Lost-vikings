#pragma once
#include "gameNode.h"

class Enemy : public gameNode

{

private : 


public:
	Enemy();
	~Enemy();

	HRESULT init();
	void release();
	void update();
	void render();
};

