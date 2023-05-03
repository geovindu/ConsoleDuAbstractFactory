// MonsterMechanic.h : ���ļ����� "MonsterMechanic" �ࡣAbstract Factory Methon Pattern C++ 14
// 2023��4��30�� Ϳ���� Geovin Du edit.
#pragma once
#ifndef MONSTERMECHANIC_H 
#define MONSTERMECHANIC_H 



#include <iostream>
#include "Monster.h"

using namespace std;



namespace DuSimpleFactory
{

	/// <summary>
	/// ��е�����
	/// </summary>
	class MonsterMechanic:public Monster
	{
	public:
		/// <summary>
		/// ���캯��
		/// </summary>
		/// <param name="life"></param>
		/// <param name="magic"></param>
		/// <param name="attack"></param>
		MonsterMechanic(int life, int magic, int attack) :Monster(life, magic, attack)
		{
			cout << "һֻ��е������������������" << endl;
		}
		//����������....

	};
}
#endif