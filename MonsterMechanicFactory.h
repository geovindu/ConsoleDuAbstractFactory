// MonsterElementFactory.h : ���ļ����� "MonsterElementFactory" �ࡣAbstract Factory Methon Pattern C++ 14
// 2023��4��30�� Ϳ���� Geovin Du edit.
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
	/// MonsterMechanic�������͵Ĺ���������MonsterMechanic���͹���
	/// </summary>
	class MonsterMechanicFactory : public MonsterParFactoryMethod
	{
	public:

		/// <summary>
		/// ������е�����
		/// </summary>
		/// <returns></returns>
		virtual Monster* createMonster()
		{
			return new MonsterMechanic(400, 0, 110); 
		}


	};
}

#endif