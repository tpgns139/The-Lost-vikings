#include "stdafx.h"

#include "EnemyManager.h"



EnemyManager::EnemyManager()
{
}


EnemyManager::~EnemyManager()
{
}

HRESULT EnemyManager::init()
{
	setEnemy();

	return S_OK;
}

void EnemyManager::release()
{
}

void EnemyManager::update()
{

	for (_viEm = _vEm.begin(); _viEm != _vEm.end(); ++_viEm)
	{
		(*_viEm)->update();
	}

	
}

void EnemyManager::render()
{
	for (_viEm = _vEm.begin(); _viEm != _vEm.end(); ++_viEm)
	{
		(*_viEm)->render();
	}
}

void EnemyManager::setEnemy()
{
	Enemy* Sl;
	Sl = new Slime;
	//Sl->init("SecurityRobotMove", PointMake(50, WINSIZEY - 100));
	Sl->init("SlimeMove", PointMake(50, WINSIZEY - 100));
	_vEm.push_back(Sl);

}
