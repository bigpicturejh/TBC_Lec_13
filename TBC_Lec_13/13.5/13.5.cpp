#include <iostream>
#include<array>
#include "Storage8.h"
using namespace std;



template <typename T>
class A
{

public:
	A(const T& input)
	{

	}
	void ds()
	{
		cout << typeid(T).name() << endl;
	}

	void test()
	{}

};

//specialization
template<>
class A<char>
{
public:
	A(const char& temp)
	{

	}
	void ds()
	{
		cout << "Char type specialization" << endl;
	}
};
int main()
{
	//A<int> a_int(1);
	A a_int(1); //클래스 생성자가 있을 경우 입력 parameter로 윗줄처럼 클래스 type을 명시해주지 않아도 됨
	A a_double(3.11);
	A a_char('bb');

	a_int.ds();
	a_double.ds();
	a_char.ds();

	a_int.test();
	a_double.test();
	//a_char.test(); specialization된 클래스에 test함수를 따로 구현해줘야 호출 가능함

	Storage8<int> intStorage;

	for (int count = 0; count < 8; ++count)
	{
		intStorage.set(count, count);
	}

	for (int count = 0; count < 8; ++count)
	{
		std::cout << intStorage.get(count) << std::endl;
	}

	cout << "Sizeof Storage8<int> " << sizeof(Storage8<int>) << endl;

	//class template의 bool type에 대해 specialization이 되어있는 경우 해당 specialization을 호출
	Storage8<bool> boolStorage;
	for (int count = 0; count < 8; ++count)
	{
		boolStorage.set(count, count);
	}

	for (int count = 0; count < 8; ++count)
	{
		std::cout << boolStorage.get(count) << std::endl;
	}

	cout << "Sizeof Storage8<Bool> " << sizeof(Storage8<bool>) << endl;

	return 0;
}

