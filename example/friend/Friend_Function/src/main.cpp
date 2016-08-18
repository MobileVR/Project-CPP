//============================================================================
// Name        : Friend_Function.cpp
// Author      : scp
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

/**
 * 友元函数
 * 计算两点之间的距离
 */
float dist(Point &p1, Point &p2) {
	double x = p1.x - p2.x;
	double y = p1.y - p2.y;
	return static_cast<float>(sqrt(x * x + y * y));
}

/**
 * 友元函数的应用
 */
int main() {

	//创建P1，P2两点
	Point p1(1, 1), p2(4, 5);

	//打印两点之间的距离
	cout << "两点之间的距离为：" << dist(p1, p2) << endl;

	return 0;
}
