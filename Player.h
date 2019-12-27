#pragma once
class Player
{
protected:

public:
	Player();
	~Player();
	HRESULT init();
	virtual void update();
	virtual void render();
};

