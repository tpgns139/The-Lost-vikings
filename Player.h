#pragma once
#include "gameNode.h"




struct Playerinfo
{
	image* _image;
	RECT _rc;
	POINT position;
	int HP;
	int MaxHP;
	int count;
	int _CurrentFrameX, _CurrentFrameY;
};
class Player : public gameNode
{
protected:

	Playerinfo _playerInfo;
	
public:
	Player();
	~Player();
	virtual HRESULT init();
	virtual void update();
	virtual void render();
};

