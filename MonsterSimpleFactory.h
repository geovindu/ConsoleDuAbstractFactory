// MonsterSimpleFactory.h : ���ļ����� "MonsterSimpleFactory" �ࡣAbstract Factory Methon Pattern C++ 14
// 2023��4��30�� Ϳ���� Geovin Du edit.
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
	/// �򵥹���ģʽ
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
			if (strmontype == "udd")  //udd����Ҫ�������������
			{
				prtnobj = new MonsterUndead(300, 50, 80);
			}
			else if (strmontype == "elm") //ele����Ҫ����Ԫ�������
			{
				prtnobj = new MonsterElement(200, 80, 100);
			}
			else if (strmontype == "mec") //mec����Ҫ������е�����
			{
				prtnobj = new MonsterMechanic(400, 0, 110);
			}
			return prtnobj;
		}


	};
}

#endif