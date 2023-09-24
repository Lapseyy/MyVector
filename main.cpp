
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

bool checkIntegerVectorsEqual(const MyVector<int>& v1, const MyVector<int>& v2)
{
	//
	if ( v1.size() != v2.size() ) {
		return false;
	}
	
	for ( size_t i = 0; i < v1.size(); i++ ) {
		if ( v1.at(i) != v2.at(i) ) {
			return false;
		}
	}
	
	return true;
}

//
int main()
{
	//

	cout << "Hello! Maybe use this source file for debugging?" << endl;
	// MyVector<int> v(100);
	// for ( size_t i = 0; i < 100; i++ ) {
	// 	int val = i * 2 - (100 / 2);
	// 	v.push_back(val);
	// }
	// MyVector<int> v2, v3(v);
	// v2 = v;
	// cout << v3.capacity() << " " << v3.size() << endl;
	// cout << v2.capacity() << " " << v2.size() << endl;

	// cout << checkIntegerVectorsEqual(v, v2) << endl;
	// cout << checkIntegerVectorsEqual(v, v3) << endl;
MyVector<int> v;
for ( int i = 0; i < 5; i++ ) {
		v.push_back(i);
	}
	for ( int i = 0; i < 5; i++ ) {
		v.pop_back();
	}

	

	// MyVector<int> v(0);
	// cout << v.empty() << endl;
	// v.push_back(1);
	// cout << v.empty() << endl;
	// v.erase(0);
	// cout << v.empty() << endl;

	// v.push_back(1);
	// v.push_back(1);
	// v.push_back(1);
	// v.push_back(1);
	// v.push_back(1);
	// v.clear();
	// cout << v.empty() << endl;

	// cout << v.at(0) << endl;
	// cout << v.at(35) << endl;
	// cout << v.at(99) << endl;
	
	// cout << v.capacity() << " " << v.size() << endl;
	// cout << v.at(77) << endl;
	// //v.insert(77, 22);
	// cout << v.at(76) << endl;
	// cout << v.at(77) << endl;
	// cout << v.at(78) << endl;

	// cout << v[-1] << " " << v[27] << " " << v[97] << endl;
	// cout << v.capacity() << " " << v.size() << endl;

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


