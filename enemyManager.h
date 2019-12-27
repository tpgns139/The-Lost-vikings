#pragma once
#include "gameNode.h"
#include "Slime.h"
#include "SecurityRobot.h"
#include "Tower.h"
#include "Enemy.h"
#include <vector>

class EnemyManager : public gameNode
{

private :

	typedef vector<Enemy*>           vEnemy;
	typedef vector<Enemy*>::iterator viEnemy;

	vEnemy _vEm;
	viEnemy _viEm;

public:
	EnemyManager();
	~EnemyManager();

	HRESULT init();
	void release();
	void update();
	void render();
	void setEnemy(); //���ʹ� ����
	void enemyBulletFire();
	vector<Enemy*> getEnemy() { return _vEm; }
	vector<Enemy*>::iterator getViEnemy() { return _viEm; }
};

