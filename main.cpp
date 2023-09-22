
/**
 * You don't have to modify this source file, but can if you want.
 * This will not be used for grading, so you can use it to debug your
 * vector class.
 * This is the program that runs with "make run"
 */

///	Your welcome
#include <iostream>
#include "MyVector.hpp"

///	Your welcome
using std::cout, std::endl;

//
int main()
{
	//
	cout << "Hello! Maybe use this source file for debugging?" << endl;
	MyVector<int> v(500);
	cout << v.size() << endl;
	cout << v.capacity() << endl;
	for (int i = 0; i < 500; i++){
		v.push_back(i);
	}
	cout << "Added 500 elements"  << endl;
	for ( int i : {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}) {
		v.push_back(i);
	}
			cout << v.size() << endl;
		cout << v.capacity() << endl;
	cout << "We made it here ";
	
	// //
	// for ( int i = 0; i < 10; i++ ) {
	// 	v.push_back(i);
	// }
	
	return 0;
}


