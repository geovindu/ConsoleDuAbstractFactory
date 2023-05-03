// MonsterUndead.h : ���ļ����� "MonsterUndead" �ࡣAbstract Factory Methon Pattern C++ 14
// 2023��4��30�� Ϳ���� Geovin Du edit.

#pragma once
#ifndef MONSTERUNDEAD_H 
#define MONSTERUNDEAD_H 



#include <iostream>
#include "Monster.h"

using namespace std;



namespace DuSimpleFactory
{

	/// <summary>
	/// ���������
	/// </summary>
	class MonsterUndead :public Monster
	{

	public:
		/// <summary>
		/// ���캯��
		/// </summary>
		/// <param name="life"></param>
		/// <param name="magic"></param>
		/// <param name="attack"></param>
		MonsterUndead(int life, int magic, int attack) :Monster(life, magic, attack)
		{
			cout << "һֻ����������������������" << endl;
		}
		//����������....

	};

}

#endif