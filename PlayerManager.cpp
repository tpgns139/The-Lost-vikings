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
<<<<<<< HEAD
	Player* _erik = new Erik;

	_erik->init();
	_vPlayer.push_back(_erik);
=======
	Player* _Baleog = new Baleog;
	_Baleog->init(PN_BALEOG);
	_vPlayer.push_back(_Baleog);
>>>>>>> 6c35325ced9e672e524765ac8e11232dcc70c874

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
