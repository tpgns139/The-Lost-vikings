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
	Player* _erik = new Erik;

	_erik->init();
	_vPlayer.push_back(_erik);

	return S_OK;
}

void PlayerManager::update()
{
	for (int i = 0; i < _vPlayer.size(); i++)
	{
		_vPlayer[i]->update();
	}
}

void PlayerManager::render()
{
	for (int i = 0; i < _vPlayer.size(); i++)
	{
		_vPlayer[i]->render();
	}
}
