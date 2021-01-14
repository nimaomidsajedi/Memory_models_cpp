/*
 * static_class_member.cpp
 *
 *  Created on: Jan 14, 2021
 *      Author: Nima Omidsajedi
 */

#include <iostream>
using namespace std;

class static_class_member {

public:
    static int my_static; // Non-constant Static member of a class cannot be initialized inside of the class and also cannot take multiple values from different objects of the class
    int my_non_static;

};

int static_class_member::my_static;

int main()
{
    static_class_member first_obj;
    static_class_member second_obj;

    first_obj.my_static = 2;
    first_obj.my_non_static = 5;

    second_obj.my_static = 4;
    second_obj.my_non_static = 10;

    cout << "first_obj-> " << "my_static: " << first_obj.my_static << endl;
    cout << "first_obj-> " << "my_non_static: " << first_obj.my_non_static << endl;
    cout << "--------------------------------" << endl;
    cout << "second_obj-> " << "my_static: " << second_obj.my_static << endl;
    cout << "second_obj-> " << "my_non_static: " << second_obj.my_non_static << endl;

}
