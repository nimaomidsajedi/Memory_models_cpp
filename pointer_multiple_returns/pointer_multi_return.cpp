/*
 * pointer_multi_return.cpp
 *
 *  Created on: Jan 8, 2021
 *      Author: Nima Omidsajedi
 */

#include <iostream>
using namespace std;

string min_max_func(int x, int y, int *min_num, int *max_num) {
	if (x > y) {
		*max_num = x;
		*min_num = y;
		return "First number is greater than the second number!";
	}
	else if (y > x){
		*max_num = y;
		*min_num = x;
		return "Second number is greater than the first number!";
	}
	else {
		return "Both numbers are equal!";
	}

}
int main() {
	int x, y, min_num, max_num;
	string my_text;
	cout << "Enter first number: ";
	cin >> x;
	cout << "Enter second number: ";
	cin >> y;
	my_text = min_max_func(x, y, &min_num, &max_num);
	if (x != y) {
		cout << "Min num is : " << min_num << endl;
		cout << "Max num is : " << max_num << endl;
	}
	cout << min_max_func(x, y, &min_num, &max_num);
	return 0;
}
