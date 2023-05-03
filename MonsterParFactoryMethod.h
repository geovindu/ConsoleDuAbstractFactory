// MonsterParFactoryMethod.h : 此文件包含 "MonsterParFactoryMethod" 类。Abstract Factory Methon Pattern C++ 14
// 2023年4月30日 涂聚文 Geovin Du edit.
#pragma once
#ifndef MONSTERPARFACTORYMETHOD_H 
#define MONSTERPARFACTORYMETHOD_H 



#include <iostream>
#include "Monster.h"
#include "MonsterUndead.h"
#include "MonsterElement.h"
#include "MonsterMechanic.h"

using namespace std;



namespace DuSimpleFactory
{
	/// <summary>
	/// 工厂方法模式
	/// </summary>
	class MonsterParFactoryMethod
	{

	public:

		/// <summary>
		/// 具体的实现在子类中进行
		/// </summary>
		/// <returns></returns>
		virtual Monster* createMonster() = 0; 

		/// <summary>
		/// 做父类时析构函数应该为虚函数
		/// </summary>
		virtual ~MonsterParFactoryMethod() {} 

	};


}


#endif