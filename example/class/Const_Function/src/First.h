/*
 * First.h
 *
 *  Created on: 2016年8月22日
 *      Author: cqq
 */

#ifndef FIRST_H_
#define FIRST_H_
#include <iostream>
using namespace std;

class First {
private:

	/**
	 * 常数据成员
	 */
	const int a;

	/**
	 * 静态常数据成员
	 */
	static const int b;

public:
	First(int i);

	virtual ~First();

	void show();

	/**
	 * const也是区分函数重载的一种因素
	 */
	void show() const;

};

#endif /* FIRST_H_ */
