// MonsterElementFactory.h : ���ļ����� "MonsterElementFactory" �ࡣAbstract Factory Methon Pattern C++ 14
// 2023��4��30�� Ϳ���� Geovin Du edit.
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
	/// �������﹤������ģ��
	/// </summary>
	/// <typeparam name="T"></typeparam>
	template <typename T>
	class MonsterChildFactory : public MonsterParFactoryMethod
	{
	public:
		virtual Monster* createMonster()
		{
			return new T(300, 50, 80);//�����Ҫ��ͬ��ֵ����Կ���ͨ��createMonster���βν�ֵ���ݽ���
		}
	};
	
}

#endif

