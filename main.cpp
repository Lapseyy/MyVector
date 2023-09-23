
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
	MyVector<int> v(100);
	for ( int i = 0; i < 100; i++ ) {
 		v.push_back (i);
	}
	cout << v.capacity() << " " << v.size() << endl;
	cout << v.at(47) << endl;
	v.erase(47);
	cout << v.at(47) << endl;
	cout << v.capacity() << " " << v.size() << endl;

	cout << v.at(0) << endl;
	v.erase(0);
	cout << v.at(0) << endl;
	cout << v.capacity() << " " << v.size() << endl;
	// MyVector<int> v(0);
	// cout << v.size() << endl;
	// cout << v.capacity() << endl;
	// for ( int i = 0; i < 1023; i++ ) {
	// 	v.push_back(i * 3);
	// }
	// 	cout << v.capacity() << " " << v.size() << endl;
	// v.push_back(44444);
	// cout << v.capacity() << " " << v.size() << endl;
	// v.push_back(55555);
	// cout << v.capacity() << " " << v.size() << endl;
	// v.push_back(66666);
	// cout << v.capacity() << " " << v.size() << endl;

	// for ( int i = 0; i < 343; i++ ) {
	// 			v.pop_back();
	// 		}
	// 		cout << v.capacity() << " " << v.size() << endl;
	// 		v.pop_back();
	// 		cout << v.capacity() << " " << v.size() << endl;
	// 		v.pop_back();
	// 		cout << v.capacity() << " " << v.size() << endl;
// 	MyVector<int> v(1000);
// 	for (int i = 0; i < 1000; i++){
// 			v.push_back(i);
// 		}
// 		cout << v.size() << endl;
// 	cout << v.capacity() << endl;
// 	MyVector<int> sv;
// 	cout << sv.size() << endl;
// 	cout << sv.capacity() << endl;
// 	for ( size_t i = 0; i < v.size(); i++ ) {
// 				sv.push_back(v.at(i));
// 			}
// 			v.reserve(2000);
// 	cout << "DONE WITH LOP" << endl;
// 	cout << v.size() << endl;
// 	cout << v.capacity() << endl;
// 		v.reserve(2000);
// 		cout << v.capacity() << endl;
// cout << sv.size() << endl;
// 	cout << sv.capacity() << endl;




	// for (int i = 0; i < 500; i++){
	// 	v.push_back(i);
	// }
	// cout << "Added 500 elements"  << endl;
	// for ( int i : {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}) {
	// 	v.push_back(i);
	// }
	// 		cout << v.size() << endl;
	// 	cout << v.capacity() << endl;
	// 	v.push_back(5);
	// 	cout << v.size() << endl;
	// 	cout << v.capacity() << endl;
	cout << "We made it here ";
	
	// //
	// for ( int i = 0; i < 10; i++ ) {
	// 	v.push_back(i);
	// }
	
	return 0;
}


