#pragma once
<<<<<<< HEAD
#include "gameNode.h"




struct Playerinfo
=======
#include"gameNode.h"
enum PlayerName{
	PN_ERIK,
	PN_BALEOG,
	PN_OLAF
};
struct Playerinfo 
>>>>>>> 6c35325ced9e672e524765ac8e11232dcc70c874
{
	image* _image;
	RECT _rc;
	POINT position;
	int HP;
	int MaxHP;
	int count;
	int _CurrentFrameX, _CurrentFrameY;
	PlayerName _playerName;
};
<<<<<<< HEAD
class Player : public gameNode
=======
class Player :public gameNode
>>>>>>> 6c35325ced9e672e524765ac8e11232dcc70c874
{
protected:

	Playerinfo _playerInfo;
	
public:
	Player();
	~Player();
<<<<<<< HEAD
	virtual HRESULT init();
=======
	virtual HRESULT init(PlayerName playerName);
>>>>>>> 6c35325ced9e672e524765ac8e11232dcc70c874
	virtual void update();
	virtual void render();
};

