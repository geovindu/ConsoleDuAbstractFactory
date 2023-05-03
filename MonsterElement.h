// MonsterElement.h : ���ļ����� "MonsterElement" �ࡣAbstract Factory Methon Pattern C++ 14
// 2023��4��30�� Ϳ���� Geovin Du edit.
#pragma once
#ifndef MONSTERELEMENT_H 
#define MONSTERELEMENT_H 



#include <iostream>
#include "Monster.h"

using namespace std;



namespace DuSimpleFactory
{
	/// <summary>
	/// Ԫ�������
	/// </summary>
	class MonsterElement:public Monster
	{

	public:
		/// <summary>
		/// ���캯��
		/// </summary>
		/// <param name="life"></param>
		/// <param name="magic"></param>
		/// <param name="attack"></param>
		MonsterElement(int life, int magic, int attack) :Monster(life, magic, attack)
		{
			cout << "һֻԪ��������������������" << endl;
		}
		//����������....

	};
}


#endif