#include <iostream>
#include "storage.h"
using namespace std;


template<typename T>
T getMax(T x, T y)
{
	return (x > y) ? x : y;
}

template <>
char getMax(char x, char y) //char type에 대해 instanciation이 되는 경우 이 함수를 빌드함(compile time에 변수 타입에 따라 조건을 걸 수 있음)
{
	cout << "Wardning: comparing chars" << endl;
	return (x > y) ? x : y;
}

int main()
{
	//cout << getMax<double>(1, 1.2) << endl;
	//cout << getMax('a', 'b') << endl;

	Storage<int> i_val(5);
	Storage<double> d_val(1.3);

	i_val.print();
	d_val.print();

	return 0;
}

