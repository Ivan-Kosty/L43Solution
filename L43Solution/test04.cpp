#include <iostream>
using namespace std;
int main() {
	int number = 10;

	int* pointer = &number;


	cout << "Before number = " << number << endl;
	*pointer *= 12;
	cout << "After number = " << number << endl;

	return 0;
}