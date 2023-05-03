// ConsoleDuAbstractFactory.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// GeovinDu.cpp : 此文件包含 "GeovinDu" 类。SimpleFactoryPattern  Abstract Factory Methon Pattern C++ 14 
// 2023年4月30日 涂聚文 Geovin Du Visual Studio 2022 edit. 文章来源《C++新经典设计模式》 王健伟编著 清华大学出版社 


#define _UNICODE

#include <iostream>

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
#include "GeovinDu.h"

using namespace std;
using namespace DuSimpleFactory;



int main()
{
    std::cout << "Hello World! 涂聚文 Geovin Du\n";


	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);//程序退出时检测内存泄漏并显示到“输出”窗口

	GeovinDu geovindu;
	geovindu.displaySimpleFactory();


	system("pause");

	return 0;
	
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
#define UNICODE