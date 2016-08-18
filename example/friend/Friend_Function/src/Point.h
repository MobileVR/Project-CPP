/*
 * Point.h
 *
 *  Created on: 2016年8月19日
 *      Author: Administrator
 */

#ifndef POINT_H_
#define POINT_H_

class Point {
private:
	//x,y坐标
	int x, y;
public:

	/**
	 * 构造函数
	 */
	Point(int x = 0, int y = 0) :
			x(x), y(y) {
	}

	/**
	 * 析构函数
	 */
	virtual ~Point();

	/**
	 * 获取X坐标
	 */
	int getX() {
		return x;
	}

	/**
	 * 获取Y坐标
	 */
	int getY() {
		return y;
	}

	/**
	 * 友元函数
	 * 求两点之间距离
	 */
	friend float dist(Point &p1, Point &p2);

};

#endif /* POINT_H_ */
