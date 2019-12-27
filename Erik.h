#pragma once
#include "gameNode.h"
struct PlayerErik
{
	image* _Erik;
	float _x, _y;
	float _speed;

};
class Erik
{
private:

public:
	Erik();
	~Erik();

	virtual HRESULT init();
	virtual void release();
	virtual void update();
	virtual void render();
	
};

