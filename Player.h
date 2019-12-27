#pragma once
class Player
{
protected:
	image* _image;
	RECT _rc;
	POINT position;
	
public:
	Player();
	~Player();
	HRESULT init();
	virtual void update();
	virtual void render();
};

