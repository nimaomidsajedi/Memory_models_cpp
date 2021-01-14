/*
 * static_variable.cpp
 *
 *  Created on: Jan 14, 2021
 *      Author: Nima Omidsajedi
 */

#include <iostream>
#include <string>
using namespace std;

int my_incrementer() {
	static int x = 0;
	x += 1;
	return x;
}

int main() {

	for (int i = 0; i < 10; i++) {
		cout << my_incrementer() << endl;
	}
	return 0;
}
