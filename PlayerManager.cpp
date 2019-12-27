#include "stdafx.h"
#include "PlayerManager.h"


PlayerManager::PlayerManager()
{
	
}


PlayerManager::~PlayerManager()
{
}

HRESULT PlayerManager::init()
{


	return S_OK;
}

void PlayerManager::update()
{
	for (int i = 0; i < _vPlayer.size(); i++)
	{
		_vPlayer[i].update();
	}
}

void PlayerManager::render()
{
	for (int i = 0; i < _vPlayer.size(); i++)
	{
		_vPlayer[i].render();
	}
}
