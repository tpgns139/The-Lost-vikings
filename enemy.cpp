#include "stdafx.h"
#include "Enemy.h"


Enemy::Enemy()
{
}


Enemy::~Enemy()
{
}

HRESULT Enemy::init(const char* imagename, POINT position)
{
	IMAGEMANAGER->addFrameImage("SlimeMove", "슬라임이동.bmp",336, 163,4,2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("SlimeAtk", "슬라임공격.bmp",168, 152, 2,2,true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("SecurityRobotMove", "경비로봇이동.bmp",420, 132,6,2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("SecurityRobotAtk", "경비로봇공격.bmp", 210, 135, 3, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("Tower", "포탑.bmp", 200, 80, 2, 1, true, RGB(255, 0, 255));

	_currentFrameX = _currentFrameY = 0;
	_enemy.x = position.x;
	_enemy.y = position.y;
	
	_enemy.img = IMAGEMANAGER->findImage(imagename);
	_enemy.rc = RectMakeCenter(position.x, position.y, _enemy.img->getFrameWidth(), _enemy.img->getFrameHeight());
	_count = 0;

	
	_rndFireCount = RND->getFromIntTo(1, 100);

	return S_OK;
}

void Enemy::release()
{
}

void Enemy::update()
{
	_count++;
	if (_count %17 == 0)
	{
		if (_currentFrameX > _enemy.img->getMaxFrameX()) _currentFrameX = 0;
		_enemy.img->setFrameX(_currentFrameX);
		_currentFrameX++;
		_count = 0;
		
		
	}
	move();
}

void Enemy::render()
{


	if (KEYMANAGER->isToggleKey(VK_F1))
	{
		Rectangle(getMemDC(), _enemy.rc);
	}
	_enemy.img->frameRender(getMemDC(), _enemy.x, _enemy.y);


	for (_viBullet = _vBullet.begin(); _viBullet != _vBullet.end(); ++_viBullet)
	{
		_viBullet->img->render(getMemDC(), _viBullet->rc.left, _viBullet->rc.right);

		Rectangle(getMemDC(), _viBullet->rc);
	}

}
void Enemy::move() 
{
	//테스트용

	if (KEYMANAGER->isStayKeyDown('A'))
	{
		_enemy.x -= 5;
		_enemy.img->setFrameY(1);
	}
	if (KEYMANAGER->isStayKeyDown('D'))
	{
		_enemy.x += 5;
		_enemy.img->setFrameY(0);
	}
}

HRESULT Enemy::init(const char * imagename, int bulletMax, int range)
{
	IMAGEMANAGER->addImage("EnemyBullet", "에너미불릿.bmp", 43, 19, true, RGB(255, 0, 255));

	_bulletMax = bulletMax;
	_range = range;

	return S_OK;
}

void Enemy::bulletfire(float x, float y,float speed)
{
	if (_bulletMax < _vBullet.size()) return;

	tagBullet bullet;
	ZeroMemory(&bullet, sizeof(tagBullet));
	bullet.img = IMAGEMANAGER->findImage("EnemyBullet");
	bullet.speed = 5;
	bullet.x = bullet.fireX = x;
	bullet.y = bullet.fireY = y;

	bullet.rc = RectMakeCenter(bullet.x, bullet.y, bullet.img->getWidth(),
		bullet.img->getHeight());
	_vBullet.push_back(bullet);
	
}



void Enemy::bulletmove()
{
	for (_viBullet = _vBullet.begin(); _viBullet != _vBullet.end();)
	{
		_viBullet->x += _viBullet->speed;
		
		_viBullet->rc = RectMakeCenter(_viBullet->x, _viBullet->y,
			_viBullet->img->getWidth(), _viBullet->img->getHeight());

		if (_range < getDistance(_viBullet->x, _viBullet->y, _viBullet->fireX, _viBullet->fireY))
		{
			_viBullet = _vBullet.erase(_viBullet);

		}
		else ++_viBullet;
	}

}

void Enemy::removeBullet(int arrNum)
{
	_vBullet.erase(_vBullet.begin() + arrNum);
}

bool Enemy::bulletfire()
{
	_enemyfirecount++;

	if (_enemyfirecount %_rndFireCount ==0)
	{
		_enemyfirecount = 0;
		_rndFireCount = RND->getFromIntTo(1, 100);

		return true;
	}
	return false;
	
}

