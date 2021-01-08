/*
 * pointer_declaration.cpp
 * Should be run solely for
 *  Created on: Jan 8, 2021
 *      Author: Nima Omidsajedi
 */

#include <iostream>
using namespace std;

int main() {
	int  my_number = 10;
	int  *my_pointer;
	my_pointer = &my_number;
	cout << "The value of my_number is : " << my_number << endl;
	cout << "The memory address of my_number is : " << &my_number << endl;
	cout << "-------------------------------" << endl;
	cout << "The value of my_pointer (which is a memory address) is : " << my_pointer<< endl;
	cout << "The memory address of my_pointer is : " << &my_pointer<< endl;
	cout << "The value which my_pointer is pointing to is : " << *my_pointer << endl;
	cout << "-------------------------------" << endl;
	cout << "my_number memory address - my_pointer memory address is : "
	<< reinterpret_cast<int>(&my_number) - reinterpret_cast<int>(&my_pointer) << " byte";

	return 0;
}




