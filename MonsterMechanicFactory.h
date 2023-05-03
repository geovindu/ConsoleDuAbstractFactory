// MonsterElementFactory.h : 此文件包含 "MonsterElementFactory" 类。Abstract Factory Methon Pattern C++ 14
// 2023年4月30日 涂聚文 Geovin Du edit.
#pragma once
#ifndef MONSTERMECHANICFACTORY_H 
#define MONSTERMECHANICFACTORY_H 



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
	/// MonsterMechanic怪物类型的工厂，生产MonsterMechanic类型怪物
	/// </summary>
	class MonsterMechanicFactory : public MonsterParFactoryMethod
	{
	public:

		/// <summary>
		/// 创建机械类怪物
		/// </summary>
		/// <returns></returns>
		virtual Monster* createMonster()
		{
			return new MonsterMechanic(400, 0, 110); 
		}


	};
}

#endif