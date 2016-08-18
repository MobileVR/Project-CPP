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
 * ��Ԫ����
 * ��������֮��ľ���
 */
float dist(Point &p1, Point &p2) {
	double x = p1.x - p2.x;
	double y = p1.y - p2.y;
	return static_cast<float>(sqrt(x * x + y * y));
}

/**
 * ��Ԫ������Ӧ��
 */
int main() {

	//����P1��P2����
	Point p1(1, 1), p2(4, 5);

	//��ӡ����֮��ľ���
	cout << "����֮��ľ���Ϊ��" << dist(p1, p2) << endl;

	return 0;
}
