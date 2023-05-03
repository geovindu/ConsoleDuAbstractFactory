// MonsterParFactoryMethod.h : ���ļ����� "MonsterParFactoryMethod" �ࡣAbstract Factory Methon Pattern C++ 14
// 2023��4��30�� Ϳ���� Geovin Du edit.
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
	/// ��������ģʽ
	/// </summary>
	class MonsterParFactoryMethod
	{

	public:

		/// <summary>
		/// �����ʵ���������н���
		/// </summary>
		/// <returns></returns>
		virtual Monster* createMonster() = 0; 

		/// <summary>
		/// ������ʱ��������Ӧ��Ϊ�麯��
		/// </summary>
		virtual ~MonsterParFactoryMethod() {} 

	};


}


#endif