//============================================================================
// Name        : Const.cpp
// Author      : scp
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>

#include "First.h"
#include "Point.h"

using namespace std;

/**
 * 友元函数
 * 函数功能：求两坐标点之间的距离
 * 参数描述：
 * p1：第一个坐标点，常引用
 * p2：第二个坐标点，常引用
 * 返回结果：两坐标之间的距离
 * 注：
 * 常引用：被const修饰的引用
 */
float dist(const Point &p1, const Point &p2) {
	double x = p1.x - p2.x;
	double y = p1.y - p1.y;
	return static_cast<float>(sqrt(x * x + y * y));
}

int main() {

	/**
	 * 当一个类里面有重载函数时，非'常对象调用非'常成员函数，常对象调用常成员函数
	 * 如下所示：
	 * f1是非'常对象，调用show打印的是"show"
	 * f2是常对象，调用show打印的是"show const"
	 * 注：
	 * 常对象指的是被const修饰的对象
	 * 常成员函数指的是被const修饰的成员函数
	 */
	First f1(1);

	f1.show(); //show

	const First f2(2);

	f2.show(); //show const

	Point p1(1, 1);

	Point p2(4, 5);

	cout << dist(p1, p2) << endl;

	return 0;
}
