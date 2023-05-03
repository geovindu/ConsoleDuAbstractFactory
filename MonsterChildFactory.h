// MonsterElementFactory.h : 此文件包含 "MonsterElementFactory" 类。Abstract Factory Methon Pattern C++ 14
// 2023年4月30日 涂聚文 Geovin Du edit.
#pragma once
#ifndef MONSTERCHILDFACTORY_H 
#define MONSTERCHILDFACTORY_H 



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
	/// 创建怪物工厂子类模板
	/// </summary>
	/// <typeparam name="T"></typeparam>
	template <typename T>
	class MonsterChildFactory : public MonsterParFactoryMethod
	{
	public:
		virtual Monster* createMonster()
		{
			return new T(300, 50, 80);//如果需要不同的值则可以考虑通过createMonster的形参将值传递进来
		}
	};
	
}

#endif

