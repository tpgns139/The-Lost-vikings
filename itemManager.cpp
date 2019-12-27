#include "stdafx.h"
#include "itemManager.h"


itemManager::itemManager()
{
}


itemManager::~itemManager()
{
}

HRESULT itemManager::init()
{

	IMAGEMANAGER->addImage("Shoes", "�Ź�.bmp", 50, 56, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("Key", "Ű.bmp", 50, 48, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("Fruit", "����.bmp", 50, 56, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("Meat", "���.bmp", 70, 75, true, RGB(255, 0, 255));





	setItem();
	return S_OK;
}

void itemManager::release()
{
}

void itemManager::update()
{
	for (_viItem = _vItem.begin(); _viItem != _vItem.end(); ++_viItem)
	{
		(*_viItem)->update();
	}





	collision();
}

void itemManager::render()
{
	for (_viItem = _vItem.begin(); _viItem != _vItem.end(); ++_viItem)
	{
		(*_viItem)->render();
	}
}

void itemManager::setItem()
{
	item* item1;
	item1 = new Shoes;
	item1->init("Shoes", PointMake(WINSIZEX / 2, WINSIZEY / 2));
	_vItem.push_back(item1);

	item* item2;
	item2 = new Key;
	item2->init("Key", PointMake(WINSIZEX / 2 - 100, WINSIZEY / 2));
	_vItem.push_back(item2);

	item* item3;
	item3 = new Fruit;
	item3->init("Fruit", PointMake(WINSIZEX / 2 - 200, WINSIZEY / 2));
	_vItem.push_back(item3);

	item* item4;
	item4 = new Meat;
	item4->init("Meat", PointMake(WINSIZEX / 2 - 300, WINSIZEY / 2));
	_vItem.push_back(item4);
}

void itemManager::collision()
{
	for (int i = 0; i < _vItem.size(); i++)
	{
		RECT temp;
		if (IntersectRect(&temp, &_vItem[i]->getRect(), &))
		{
			removeItem(i);
		}
	}
}

void itemManager::removeItem(int arrNum)
{
	_vItem.erase(_vItem.begin() + arrNum);

}
