#pragma once

struct Playerinfo
{
	image* _image;
	RECT _rc;
	POINT position;
	int HP;
	int count;
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

