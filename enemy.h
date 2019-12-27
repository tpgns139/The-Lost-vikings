#pragma once
#include "gameNode.h"


struct ENEMY
{
	image* img;
	float  x, y;
	
	float speed;
	float angle;
	RECT rc;
	int count;
};
struct tagBullet
{
	image* img;
	int x, y;
	float fireX, fireY;
	float speed;
	float angle;
	RECT rc;
};


class Enemy : public gameNode

{

protected:
	vector<tagBullet> _vBullet;
	vector<tagBullet>::iterator _viBullet;


	ENEMY _enemy;
	int _bulletMax;
	float _range;
	int _currentFrameX, _currentFrameY;  //�о���̴� ���� ������ ��ġ
	int _count; //������ ��� �ӵ�
	int _rndFireCount;
	int _firecount = 0;
	int _enemyfirecount;
public:
	Enemy();
	~Enemy();

	HRESULT init(const char* imagename, POINT position);
	
	void release();
	void update();
	void render();
	virtual void move(); 
	HRESULT init(const char* imagename, int bulletMax, int range);
	void bulletfire(float x, float y,  float speed);
	void bulletmove();
	void removeBullet(int arrNum);
	bool bulletfire();
	vector<tagBullet> getVBullet() { return _vBullet; }
	vector<tagBullet>::iterator getViBullet() { return _viBullet; }
	
};

