/*
 * First.cpp
 *
 *  Created on: 2016年8月22日
 *      Author: cqq
 */

#include "First.h"

const int First::b = 10;

First::First(int i) :
		a(i) {
}

First::~First() {
}

void First::show() {
	cout << "show" << a << "," << b << endl;
}

void First::show() const {
	cout << "show const" << a << "," << b << endl;
}

