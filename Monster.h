// Monster.h : ���ļ����� "Monster" �ࡣAbstract Factory Pattern C++ 14
// 2023��4��29�� Ϳ���� Geovin Du  Visual Studio 2022 edit.
#pragma once
#ifndef MONSTER_H 
#define MONSTER_H 



#include <iostream>


using namespace std;



namespace DuSimpleFactory
{

	/// <summary>
	/// ���︸��
	/// </summary>
	class Monster
	{

	public:
		/// <summary>
		/// ���캯��
		/// </summary>
		/// <param name="life"></param>
		/// <param name="magic"></param>
		/// <param name="attack"></param>
		Monster(int life, int magic, int attack) :m_life(life), m_magic(magic), m_attack(attack) {}
		/// <summary>
		/// ������ʱ��������Ӧ��Ϊ�麯��
		/// </summary>
		virtual ~Monster() {} 

	protected: //���ܱ�������ʵĳ�Ա����protected����
		//��������

		/// <summary>
		/// ����ֵ
		/// </summary>
		int m_life;   
		/// <summary>
		/// ħ��ֵ
		/// </summary>
		int m_magic;  

		/// <summary>
		/// ������
		/// </summary>
		int m_attack;  


	};

}

#endif