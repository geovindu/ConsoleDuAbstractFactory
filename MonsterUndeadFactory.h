// MonsterUndeadFactory.h : ���ļ����� "MonsterUndeadFactory" �ࡣAbstract Factory Methon Pattern C++ 14
// 2023��4��30�� Ϳ���� Geovin Du edit.
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
	/// MonsterUndead�������͵Ĺ���������MonsterUndead���͹���
	/// </summary>
	class MonsterUndeadFactory : public MonsterParFactoryMethod
	{
	public:
		/// <summary>
		/// �������������
		/// </summary>
		/// <returns></returns>
		virtual Monster* createMonster()
		{


			return new MonsterUndead(300, 50, 80); 
		}

	};
}

#endif