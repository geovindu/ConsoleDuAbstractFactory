// MonsterElement.h : 此文件包含 "MonsterElement" 类。Abstract Factory Methon Pattern C++ 14
// 2023年4月30日 涂聚文 Geovin Du edit.
#pragma once
#ifndef MONSTERELEMENT_H 
#define MONSTERELEMENT_H 



#include <iostream>
#include "Monster.h"

using namespace std;



namespace DuSimpleFactory
{
	/// <summary>
	/// 元素类怪物
	/// </summary>
	class MonsterElement:public Monster
	{

	public:
		/// <summary>
		/// 构造函数
		/// </summary>
		/// <param name="life"></param>
		/// <param name="magic"></param>
		/// <param name="attack"></param>
		MonsterElement(int life, int magic, int attack) :Monster(life, magic, attack)
		{
			cout << "一只元素类怪物来到了这个世界" << endl;
		}
		//其他代码略....

	};
}


#endif