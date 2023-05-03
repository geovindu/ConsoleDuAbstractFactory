// MonsterElementFactory.h : ���ļ����� "MonsterElementFactory" �ࡣAbstract Factory Methon Pattern C++ 14
// 2023��4��30�� Ϳ���� Geovin Du edit.
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
	/// MonsterElement�������͵Ĺ���������MonsterElement���͹���
	/// </summary>
	class MonsterElementFactory : public MonsterParFactoryMethod
	{

	public:

		/// <summary>
		/// ����Ԫ�������
		/// </summary>
		/// <returns></returns>
		virtual Monster* createMonster()
		{
			return new MonsterElement(200, 80, 100); 
		}


	};





}

#endif