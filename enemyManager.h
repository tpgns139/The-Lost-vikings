#pragma once
#include "gameNode.h"
#include "Slime.h"
#include "SecurityRobot.h"
#include "Tower.h"

#include <vector>

class EnemyManager : public gameNode
{

private :

public:
	EnemyManager();
	~EnemyManager();

	HRESULT init();
	void release();
	void update();
	void render();
};

