// MonsterUndeadFactory.h : 此文件包含 "MonsterUndeadFactory" 类。Abstract Factory Methon Pattern C++ 14
// 2023年4月30日 涂聚文 Geovin Du edit.
#pragma once
#ifndef MONSTERUNDEADFACTORY_H 
#define MONSTERUNDEADFACTORY_H 



#include <iostream>
#include "Monster.h"
#include "MonsterUndead.h"
#include "MonsterElement.h"
#include "MonsterMechanic.h"
#include "MonsterParFactoryMethod.h"

using namespace std;



namespace DuSimpleFactory
{

	/// <summary>
	/// MonsterUndead怪物类型的工厂，生产MonsterUndead类型怪物
	/// </summary>
	class MonsterUndeadFactory : public MonsterParFactoryMethod
	{
	public:
		/// <summary>
		/// 创建亡灵类怪物
		/// </summary>
		/// <returns></returns>
		virtual Monster* createMonster()
		{


			return new MonsterUndead(300, 50, 80); 
		}

	};
}

#endif