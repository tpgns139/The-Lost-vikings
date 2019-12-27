


#include "stdafx.h"
#include "GameScene.h"

GameScene::GameScene()
{
}


GameScene::~GameScene()
{
}
HRESULT GameScene::init()
{
<<<<<<< HEAD
=======
	_playerManager = new PlayerManager;
	_playerManager->init();

>>>>>>> 1fad7d04326c505c3c74c14b7708a00ce357a4d3
	/*IMAGEMANAGER->addFrameImage("ericIdle", "ericIdle.bmp", 0, 0, 336, 200, 4, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("character", "character.bmp", 0, 0, 325, 200, 4, 2, true, RGB(255, 0, 255));


	IMAGEMANAGER->addFrameImage("Elevator", "Elevator.bmp", 0, 0, 400, 350, 4, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("character", "character.bmp", 0, 0, 325, 200, 4, 2, true, RGB(255, 0, 255));

	IMAGEMANAGER->addFrameImage("묘비", "묘비.bmp", 0, 0, 891, 73, 11, 1, true, RGB(255, 0, 255));

	IMAGEMANAGER->addFrameImage("ThornBush", "ThornBush.bmp", 0, 0, 600, 97, 3, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("ElectricField", "ElectricField.bmp", 0, 0, 600, 27, 3, 1, true, RGB(255, 0, 255));

	IMAGEMANAGER->addFrameImage("BlueTile", "BlueTile.bmp", 0, 0, 212, 53, 4, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("RedTile", "RedTile.bmp", 0, 0, 212, 53, 4, 1, true, RGB(255, 0, 255));

	count = 0;
	IMAGEMANAGER->addImage("고기", "고기.bmp", 70, 75, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("과일", "과일.bmp", 50, 56, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("신발", "신발.bmp", 50, 56, true, RGB(255, 0, 255));

	IMAGEMANAGER->addImage("배경", "Map.bmp", 4000, 1984, true, RGB(255, 0, 255));*/
<<<<<<< HEAD
=======

	_im = new itemManager;
	_im->init();

>>>>>>> 1fad7d04326c505c3c74c14b7708a00ce357a4d3
	return S_OK;
}

void GameScene::update()
{
<<<<<<< HEAD
=======
	_playerManager->update();

>>>>>>> 1fad7d04326c505c3c74c14b7708a00ce357a4d3
	/*count++;
	if (count % 5 == 0)
	{

		currentX++;
		if (currentX > IMAGEMANAGER->findImage("ThornBush")->getMaxFrameX())currentX = 0;
	}
	if (KEYMANAGER->isOnceKeyDown(VK_LBUTTON))
	{
		cout << CAMERA->getCameraXpos() + _ptMouse.x << "," << CAMERA->getCameraYpos() + _ptMouse.y << endl;
	}*/
<<<<<<< HEAD
=======


	_im->update();
>>>>>>> 1fad7d04326c505c3c74c14b7708a00ce357a4d3
}

void GameScene::render()
{
<<<<<<< HEAD
	//IMAGEMANAGER->findImage("배경")->render(getMemDC(), 0, 0, CAMERA->getCameraXpos(), CAMERA->getCameraYpos(), WINSIZEX, WINSIZEY);
=======
	_playerManager->render();
	//IMAGEMANAGER->findImage("배경")->render(getMemDC(), 0, 0, CAMERA->getCameraXpos(), CAMERA->getCameraYpos(), WINSIZEX, WINSIZEY);
	/*IMAGEMANAGER->findImage("배경")->render(getMemDC(), 0, 0, CAMERA->getCameraXpos(), CAMERA->getCameraYpos(), WINSIZEX, WINSIZEY);

>>>>>>> 1fad7d04326c505c3c74c14b7708a00ce357a4d3


	//IMAGEMANAGER->findImage("character")->frameRender(getMemDC(), 1800 - CAMERA->getCameraXpos(), 1090 - CAMERA->getCameraYpos(), 0, 0);
	//IMAGEMANAGER->findImage("ericIdle")->frameRender(getMemDC(), 1800 - CAMERA->getCameraXpos(), 1090 - CAMERA->getCameraYpos(), 0, 0);

<<<<<<< HEAD
	//IMAGEMANAGER->findImage("character")->frameRender(getMemDC(), 1800 - CAMERA->getCameraXpos(), 1090 - CAMERA->getCameraYpos(), 0, 0);
	//IMAGEMANAGER->findImage("ericIdle")->frameRender(getMemDC(), 1800 - CAMERA->getCameraXpos(), 1090 - CAMERA->getCameraYpos(), 0, 0);
=======
>>>>>>> 1fad7d04326c505c3c74c14b7708a00ce357a4d3

	////맵 매니저에서 별도록 읽어오도록 해야함
	//IMAGEMANAGER->findImage("Elevator")->frameRender(getMemDC(), 800 - CAMERA->getCameraXpos(), 90 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("Elevator")->frameRender(getMemDC(), 1100 - CAMERA->getCameraXpos(), 90 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("Elevator")->frameRender(getMemDC(), 1400 - CAMERA->getCameraXpos(), 90 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("Elevator")->frameRender(getMemDC(), 2100 - CAMERA->getCameraXpos(), 90 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("Elevator")->frameRender(getMemDC(), 2750 - CAMERA->getCameraXpos(), 90 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("Elevator")->frameRender(getMemDC(), 3400 - CAMERA->getCameraXpos(), 90 - CAMERA->getCameraYpos(), currentX, 0);

<<<<<<< HEAD
	////맵 매니저에서 별도록 읽어오도록 해야함
	//IMAGEMANAGER->findImage("Elevator")->frameRender(getMemDC(), 800 - CAMERA->getCameraXpos(), 90 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("Elevator")->frameRender(getMemDC(), 1100 - CAMERA->getCameraXpos(), 90 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("Elevator")->frameRender(getMemDC(), 1400 - CAMERA->getCameraXpos(), 90 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("Elevator")->frameRender(getMemDC(), 2100 - CAMERA->getCameraXpos(), 90 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("Elevator")->frameRender(getMemDC(), 2750 - CAMERA->getCameraXpos(), 90 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("Elevator")->frameRender(getMemDC(), 3400 - CAMERA->getCameraXpos(), 90 - CAMERA->getCameraYpos(), currentX, 0);

	//IMAGEMANAGER->findImage("묘비")->frameRender(getMemDC(), 1800 - CAMERA->getCameraXpos(), 1090 - CAMERA->getCameraYpos(), 0, 0);

	//IMAGEMANAGER->findImage("ThornBush")->frameRender(getMemDC(), 2350 - CAMERA->getCameraXpos(), 1810 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("ElectricField")->frameRender(getMemDC(), 2800 - CAMERA->getCameraXpos(), 1350 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("ElectricField")->stretchFrameRender(getMemDC(), 800 - CAMERA->getCameraXpos(), 100 - CAMERA->getCameraYpos(), 400, 27, currentX, 0);
	//IMAGEMANAGER->findImage("ElectricField")->stretchFrameRender(getMemDC(), 1400 - CAMERA->getCameraXpos(), 100 - CAMERA->getCameraYpos(), 2100, 27, currentX, 0);

	//IMAGEMANAGER->findImage("과일")->render(getMemDC(), 2000 - CAMERA->getCameraXpos(), 1090 - CAMERA->getCameraYpos());
=======
	//IMAGEMANAGER->findImage("묘비")->frameRender(getMemDC(), 1800 - CAMERA->getCameraXpos(), 1090 - CAMERA->getCameraYpos(), 0, 0);

	//IMAGEMANAGER->findImage("ThornBush")->frameRender(getMemDC(), 2350 - CAMERA->getCameraXpos(), 1810 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("ElectricField")->frameRender(getMemDC(), 2800 - CAMERA->getCameraXpos(), 1350 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("ElectricField")->stretchFrameRender(getMemDC(), 800 - CAMERA->getCameraXpos(), 100 - CAMERA->getCameraYpos(), 400, 27, currentX, 0);
	//IMAGEMANAGER->findImage("ElectricField")->stretchFrameRender(getMemDC(), 1400 - CAMERA->getCameraXpos(), 100 - CAMERA->getCameraYpos(), 2100, 27, currentX, 0);

	//IMAGEMANAGER->findImage("과일")->render(getMemDC(), 2000 - CAMERA->getCameraXpos(), 1090 - CAMERA->getCameraYpos());

>>>>>>> 1fad7d04326c505c3c74c14b7708a00ce357a4d3



	//IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 1323 - CAMERA->getCameraXpos(), 1014 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 1923 - CAMERA->getCameraXpos(), 1040 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 2424 - CAMERA->getCameraXpos(), 1214 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 2974 - CAMERA->getCameraXpos(), 1040 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 3674 - CAMERA->getCameraXpos(), 1614 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 3524 - CAMERA->getCameraXpos(), 240 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 624 - CAMERA->getCameraXpos(), 315 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 1424 - CAMERA->getCameraXpos(), 1715 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 1923 - CAMERA->getCameraXpos(), 1715 - CAMERA->getCameraYpos(), currentX, 0);

<<<<<<< HEAD
	//IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 1323 - CAMERA->getCameraXpos(), 1014 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 1923 - CAMERA->getCameraXpos(), 1040 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 2424 - CAMERA->getCameraXpos(), 1214 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 2974 - CAMERA->getCameraXpos(), 1040 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 3674 - CAMERA->getCameraXpos(), 1614 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 3524 - CAMERA->getCameraXpos(), 240 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 624 - CAMERA->getCameraXpos(), 315 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 1424 - CAMERA->getCameraXpos(), 1715 - CAMERA->getCameraYpos(), currentX, 0);
	//IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 1923 - CAMERA->getCameraXpos(), 1715 - CAMERA->getCameraYpos(), currentX, 0);

	//IMAGEMANAGER->findImage("RedTile")->frameRender(getMemDC(), 2624 - CAMERA->getCameraXpos(), 1040 - CAMERA->getCameraYpos(), currentX, 0);
=======

	IMAGEMANAGER->findImage("RedTile")->frameRender(getMemDC(), 2624 - CAMERA->getCameraXpos(), 1040 - CAMERA->getCameraYpos(), currentX, 0);
	*/
>>>>>>> 1fad7d04326c505c3c74c14b7708a00ce357a4d3

	_im->render();
}

void GameScene::release()
{

}


