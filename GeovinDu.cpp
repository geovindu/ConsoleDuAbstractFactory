// GeovinDu.cpp : 此文件包含 "GeovinDu" 类。Abstract Factory Methon Pattern C++ 14
// 2023年4月29日 涂聚文 Geovin Du edit.
// https://refactoringguru.cn/design-patterns/factory-method/cpp/example

#include "GeovinDu.h"
#include "Monster.h"
#include "MonsterUndead.h"
#include "MonsterElement.h"
#include "MonsterMechanic.h"
#include "MonsterParFactoryMethod.h"
#include "MonsterElementFactory.h"
#include "MonsterMechanicFactory.h"
#include "MonsterSimpleFactory.h"
#include "MonsterUndeadFactory.h"
#include "MonsterChildFactory.h"

using namespace std;

namespace DuSimpleFactory
{


	/// <summary>
	/// 全局的用于创建怪物对象的函数，注意形参的类型是工厂父类类型的指针，返回类型是怪物父类类型的指针
	/// </summary>
	/// <param name="factory"></param>
	/// <returns></returns>
	Monster* GlobalCreateMonster(MonsterParFactoryMethod* factory)
	{
		return factory->createMonster();//createMonster虚函数扮演了多态new的行为，factory指向的具体怪物工厂类不同，创建的怪物对象也不同
	}


	/// <summary>
	/// 简单工厂模式Simple factory model  pattern
	/// </summary>
	void GeovinDu::displaySimpleFactory()
	{


		/**/
		DuSimpleFactory::Monster* pM01 = new DuSimpleFactory::MonsterUndead(300, 50, 80); //产生了一只亡灵类怪物
		DuSimpleFactory::Monster* pM02 = new DuSimpleFactory::MonsterElement(200, 80, 100); //产生了一只元素类怪物
		DuSimpleFactory::Monster* pM03 = new DuSimpleFactory::MonsterMechanic(400, 0, 110); //产生了一只机械类怪物
		//释放资源
		delete pM01;
		delete pM02;
		delete pM03;


		/**/
		//简单工厂模式
		DuSimpleFactory::MonsterSimpleFactory facobj;
		DuSimpleFactory::Monster* pM11 = facobj.createMonster("udd"); //产生了一只亡灵类怪物，当然这里必须知道"udd"代表的是创建亡灵类怪物
		DuSimpleFactory::Monster* pM12 = facobj.createMonster("elm"); //产生了一只元素类怪物
		DuSimpleFactory::Monster* pM13 = facobj.createMonster("mec"); //产生了一只机械类怪物
		//释放资源
		delete pM11;
		delete pM12;
		delete pM13;


		/**/
		//工厂方法模式
		DuSimpleFactory::MonsterParFactoryMethod* p_ud_fy = new DuSimpleFactory::MonsterUndeadFactory(); //多态工厂，注意指针类型
		DuSimpleFactory::Monster* pM21 = GlobalCreateMonster(p_ud_fy);//产生了一只亡灵类怪物，也是多态，注意返回类型，当然也可以直接写成Monster* pM1 = p_ud_fy->createMonster();

		DuSimpleFactory::MonsterParFactoryMethod* p_elm_fy = new DuSimpleFactory::MonsterElementFactory();
		DuSimpleFactory::Monster* pM22 = GlobalCreateMonster(p_elm_fy);  //产生了一只元素类怪物

		DuSimpleFactory::MonsterParFactoryMethod* p_mec_fy = new DuSimpleFactory::MonsterMechanicFactory();
		DuSimpleFactory::Monster* pM23 = GlobalCreateMonster(p_mec_fy);  //产生了一只机械类怪物

		//释放资源
		//释放工厂
		delete p_ud_fy;
		delete p_elm_fy;
		delete p_mec_fy;

		//释放怪物
		delete pM21;
		delete pM22;
		delete pM23;


		/**/
		DuSimpleFactory::MonsterChildFactory<DuSimpleFactory::MonsterUndead> myFactory;
		DuSimpleFactory::Monster* pM10 = myFactory.createMonster();
		//释放资源
		delete pM10;

	}
}
