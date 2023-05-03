// MonsterSimpleFactory.h : 此文件包含 "MonsterSimpleFactory" 类。Abstract Factory Methon Pattern C++ 14
// 2023年4月30日 涂聚文 Geovin Du edit.
#pragma once
#ifndef MONSTERSIMPLEFACTORY_H 
#define MONSTERSIMPLEFACTORY_H 



#include <iostream>
#include "Monster.h"
#include "MonsterUndead.h"
#include "MonsterElement.h"
#include "MonsterMechanic.h"

using namespace std;



namespace DuSimpleFactory
{
	/// <summary>
	/// 简单工厂模式
	/// </summary>

	class MonsterSimpleFactory
	{

	public:
		/// <summary>
		/// 
		/// </summary>
		/// <param name="strmontype"></param>
		/// <returns></returns>
		Monster* createMonster(string strmontype)
		{
			Monster* prtnobj = nullptr;
			if (strmontype == "udd")  //udd代表要创建亡灵类怪物
			{
				prtnobj = new MonsterUndead(300, 50, 80);
			}
			else if (strmontype == "elm") //ele代表要创建元素类怪物
			{
				prtnobj = new MonsterElement(200, 80, 100);
			}
			else if (strmontype == "mec") //mec代表要创建机械类怪物
			{
				prtnobj = new MonsterMechanic(400, 0, 110);
			}
			return prtnobj;
		}


	};
}

#endif