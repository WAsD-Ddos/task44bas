#include <iostream>
#include <string>
using namespace std;

void init(int* array, int size) {

}

int* test(int* size) {
	*size = 5;
	int* array = new int[5];
	*(array) = 1;
	*(array + 1) = 2;
	*(array + 2) = 3;
	*(array + 3) = 4;
	*(array + 4) = 5;
	return array;
}

int main() {
	int size = 0;
	int* array = test(&size);


	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << " ";
	}

	delete[] array;


	return 0;
}   