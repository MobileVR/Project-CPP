/*
 * Point.h
 *
 *  Created on: 2016��8��19��
 *      Author: Administrator
 */

#ifndef POINT_H_
#define POINT_H_

class Point {
private:
	//x,y����
	int x, y;
public:

	/**
	 * ���캯��
	 */
	Point(int x = 0, int y = 0) :
			x(x), y(y) {
	}

	/**
	 * ��������
	 */
	virtual ~Point();

	/**
	 * ��ȡX����
	 */
	int getX() {
		return x;
	}

	/**
	 * ��ȡY����
	 */
	int getY() {
		return y;
	}

	/**
	 * ��Ԫ����
	 * ������֮�����
	 */
	friend float dist(Point &p1, Point &p2);

};

#endif /* POINT_H_ */
