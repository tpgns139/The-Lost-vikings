#include "stdafx.h"
#include "Erik.h"


Erik::Erik()
{
}


Erik::~Erik()
{
}

HRESULT Erik::init()
{

	//에릭//
	IMAGEMANAGER->addFrameImage("E_idle1", "image/erikImage/idle1.bmp", 336, 200, 4, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("E_idle2", "image/erikImage/idle2.bmp", 563, 200, 6, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("E_idle3", "image/erikImage/idle3.bmp", 260, 200, 3, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("E_jump", "image/erikImage/jump.bmp", 388, 200, 4, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("E_up", "image/erikImage/up.bmp", 327, 100, 4, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("E_drop", "image/erikImage/drop.bmp", 300, 200, 3, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("E_run", "image/erikImage/run.bmp", 800, 200, 8, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("E_atk", "image/erikImage/atk.bmp", 800, 200, 8, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("E_attcked1", "image/erikImage/attcked1.bmp", 97, 200, 1, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("E_attack_after", "image/erikImage/attack_after.bmp", 1133, 200, 11, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("E_die", "image/erikImage/die.bmp", 637, 200, 7, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("E_die_divide", "image/erikImage/die_divide.bmp", 0, 0, 763, 200, 7, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("E_up_end", "image/erikImage/up_end.bmp", 194, 100, 2, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("E_die_electric", "image/erikImage/die_electric.bmp", 194, 200, 2, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("E_push", "image/erikImage/push.bmp", 388, 200, 4, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("E_die_fall", "image/erikImage/die_fall.bmp", 640, 200, 6, 2, true, RGB(255, 0, 255));



	


	_erik.pos.x = WINSIZEX / 2;
	_erik.pos.y = WINSIZEY / 2;

	_erik.count = _erik.currentFrameX = _erik.currentFrameY = 0;

	
	_erik.rc = RectMakeCenter(_erik.pos.x, _erik.pos.y, _erik.img->getFrameWidth(), _erik.img->getFrameHeight());


	return S_OK;
}

void Erik::release()
{
}

void Erik::update()
{

	_erik.img = IMAGEMANAGER->findImage("E_idle1");


	_erik.count++;
	if (_erik.count % 10 == 0)
	{
		if (_erik.currentFrameX > _erik.img->getMaxFrameX()) _erik.currentFrameX = 0;

		_erik.img->setFrameX(_erik.currentFrameX);			// setFrameX에 봐야하는 프레임 x값을 매개변수로 보내준다. 
		_erik.currentFrameX++;								// 다음 이미지를 보기 위해 값을 증가시킨다.
		_erik.count = 0;										// 카운트를 초기화 해준다.
	}




	if (KEYMANAGER->isStayKeyDown('A'))
	{
		_erik.img = IMAGEMANAGER->findImage("E_run");

		_erik.currentFrameX--;
		
		_erik.pos.x -=3;
	}

	if (KEYMANAGER->isStayKeyDown('D'))
	{
		_erik.img = IMAGEMANAGER->findImage("E_run");
		_erik.pos.x += 3;

	}


	_erik.rc = RectMakeCenter(_erik.pos.x, _erik.pos.y, _erik.img->getFrameWidth(), _erik.img->getFrameHeight());

}

void Erik::render()
{
	_erik.img->frameRender(getMemDC(), _erik.rc.left, _erik.rc.top);

	if (KEYMANAGER->isToggleKey('1'))Rectangle(getMemDC(), _erik.rc);

}

