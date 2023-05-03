// GeovinDu.cpp : ���ļ����� "GeovinDu" �ࡣAbstract Factory Methon Pattern C++ 14
// 2023��4��29�� Ϳ���� Geovin Du edit.
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
	/// ȫ�ֵ����ڴ����������ĺ�����ע���βε������ǹ����������͵�ָ�룬���������ǹ��︸�����͵�ָ��
	/// </summary>
	/// <param name="factory"></param>
	/// <returns></returns>
	Monster* GlobalCreateMonster(MonsterParFactoryMethod* factory)
	{
		return factory->createMonster();//createMonster�麯�������˶�̬new����Ϊ��factoryָ��ľ�����﹤���಻ͬ�������Ĺ������Ҳ��ͬ
	}


	/// <summary>
	/// �򵥹���ģʽSimple factory model  pattern
	/// </summary>
	void GeovinDu::displaySimpleFactory()
	{


		/**/
		DuSimpleFactory::Monster* pM01 = new DuSimpleFactory::MonsterUndead(300, 50, 80); //������һֻ���������
		DuSimpleFactory::Monster* pM02 = new DuSimpleFactory::MonsterElement(200, 80, 100); //������һֻԪ�������
		DuSimpleFactory::Monster* pM03 = new DuSimpleFactory::MonsterMechanic(400, 0, 110); //������һֻ��е�����
		//�ͷ���Դ
		delete pM01;
		delete pM02;
		delete pM03;


		/**/
		//�򵥹���ģʽ
		DuSimpleFactory::MonsterSimpleFactory facobj;
		DuSimpleFactory::Monster* pM11 = facobj.createMonster("udd"); //������һֻ����������Ȼ�������֪��"udd"������Ǵ������������
		DuSimpleFactory::Monster* pM12 = facobj.createMonster("elm"); //������һֻԪ�������
		DuSimpleFactory::Monster* pM13 = facobj.createMonster("mec"); //������һֻ��е�����
		//�ͷ���Դ
		delete pM11;
		delete pM12;
		delete pM13;


		/**/
		//��������ģʽ
		DuSimpleFactory::MonsterParFactoryMethod* p_ud_fy = new DuSimpleFactory::MonsterUndeadFactory(); //��̬������ע��ָ������
		DuSimpleFactory::Monster* pM21 = GlobalCreateMonster(p_ud_fy);//������һֻ��������Ҳ�Ƕ�̬��ע�ⷵ�����ͣ���ȻҲ����ֱ��д��Monster* pM1 = p_ud_fy->createMonster();

		DuSimpleFactory::MonsterParFactoryMethod* p_elm_fy = new DuSimpleFactory::MonsterElementFactory();
		DuSimpleFactory::Monster* pM22 = GlobalCreateMonster(p_elm_fy);  //������һֻԪ�������

		DuSimpleFactory::MonsterParFactoryMethod* p_mec_fy = new DuSimpleFactory::MonsterMechanicFactory();
		DuSimpleFactory::Monster* pM23 = GlobalCreateMonster(p_mec_fy);  //������һֻ��е�����

		//�ͷ���Դ
		//�ͷŹ���
		delete p_ud_fy;
		delete p_elm_fy;
		delete p_mec_fy;

		//�ͷŹ���
		delete pM21;
		delete pM22;
		delete pM23;


		/**/
		DuSimpleFactory::MonsterChildFactory<DuSimpleFactory::MonsterUndead> myFactory;
		DuSimpleFactory::Monster* pM10 = myFactory.createMonster();
		//�ͷ���Դ
		delete pM10;

	}
}
