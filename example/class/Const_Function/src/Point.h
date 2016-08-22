/*
 * Point.h
 *
 *  Created on: 2016年8月22日
 *      Author: cqq
 */

#ifndef POINT_H_
#define POINT_H_

class Point {
private:
	int x, y;
public:
	Point(int x, int y);
	virtual ~Point();

	/**
	 * 友元函数
	 * 函数功能：求两坐标点之间的距离
	 * 参数描述：
	 * p1：第一个坐标点，常引用
	 * p2：第二个坐标点，常引用
	 * 返回结果：两坐标之间的距离
	 */
	friend float dist(const Point &p1, const Point &p2);

};

#endif /* POINT_H_ */
