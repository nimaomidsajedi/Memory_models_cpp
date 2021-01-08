/*
 * pointer_seq.cpp
 *
 *  Created on: Jan 8, 2021
 *      Author: Nima Omidsajedi
 */

#include <iostream>

using namespace std;

void my_func() {
	int x = 10;
	cout << "X value is " << x << endl;
	cout << &x << endl;
}

int main() {

	int y = 15;
	cout << "Y value is " << y << endl;
	cout << &y << endl;

	my_func();

	return 0;
}







