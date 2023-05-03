// MonsterElementFactory.h : 此文件包含 "MonsterElementFactory" 类。Abstract Factory Methon Pattern C++ 14
// 2023年4月30日 涂聚文 Geovin Du edit.
#pragma once
#ifndef MONSTERELEMENTFACTORY_H 
#define MONSTERELEMENTFACTORY_H 



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
	/// MonsterElement怪物类型的工厂，生产MonsterElement类型怪物
	/// </summary>
	class MonsterElementFactory : public MonsterParFactoryMethod
	{

	public:

		/// <summary>
		/// 创建元素类怪物
		/// </summary>
		/// <returns></returns>
		virtual Monster* createMonster()
		{
			return new MonsterElement(200, 80, 100); 
		}


	};





}

#endif