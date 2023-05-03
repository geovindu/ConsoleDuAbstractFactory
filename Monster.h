// Monster.h : 此文件包含 "Monster" 类。Abstract Factory Pattern C++ 14
// 2023年4月29日 涂聚文 Geovin Du  Visual Studio 2022 edit.
#pragma once
#ifndef MONSTER_H 
#define MONSTER_H 



#include <iostream>


using namespace std;



namespace DuSimpleFactory
{

	/// <summary>
	/// 怪物父类
	/// </summary>
	class Monster
	{

	public:
		/// <summary>
		/// 构造函数
		/// </summary>
		/// <param name="life"></param>
		/// <param name="magic"></param>
		/// <param name="attack"></param>
		Monster(int life, int magic, int attack) :m_life(life), m_magic(magic), m_attack(attack) {}
		/// <summary>
		/// 做父类时析构函数应该为虚函数
		/// </summary>
		virtual ~Monster() {} 

	protected: //可能被子类访问的成员，用protected修饰
		//怪物属性

		/// <summary>
		/// 生命值
		/// </summary>
		int m_life;   
		/// <summary>
		/// 魔法值
		/// </summary>
		int m_magic;  

		/// <summary>
		/// 攻击力
		/// </summary>
		int m_attack;  


	};

}

#endif