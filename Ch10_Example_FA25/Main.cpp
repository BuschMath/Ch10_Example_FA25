#include <iostream>

using namespace std;

int main()
{
	int number = 10;
	int* p_Number = &number;

	cout << "Value of number: " << number << endl;
	cout << "Address of number: " << &number << endl;
	cout << "Value of pNumber (address of number): " << p_Number << endl;
	cout << "Value pointed to by pNumber: " << *p_Number << endl;

	char* p_char = new char;
	*p_char = 'A';
	cout << "Value pointed to by p_char: " << *p_char << endl;

	return 0;
}