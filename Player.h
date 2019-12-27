#pragma once

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
class Player
{
protected:

	Playerinfo _playerInfo;
	
public:
	Player();
	~Player();
	HRESULT init();
	virtual void update();
	virtual void render();
};

