
#include <iostream>
#include <string>
#include <algorithm>
#include <list>
using namespace std;


int main()
{
	int a = 5;
	int* pointer1;
	pointer1 = &a;
	int* pointer2 = pointer1;

	cout << "Prints address of a (&a) - " << &a << endl;
	cout << " Pointer1*, stores the address of a - " << pointer1 << endl;
	cout << " Pointer2* same as pointer1 but directly assigned. Stores the address of a - " << pointer2 << endl;
	cout << " *&a Prints the VALUE of the address of a (its own address) - " << *&a << endl;
	cout << " *p1 prints the value stored in the address of a - " << *pointer1 << endl;

	list<int> intList = { 1,5,3,4,56,6,7 };
	






	string y;
	getline(cin, y);

	return 0;
}

