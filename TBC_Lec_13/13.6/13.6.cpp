#include <iostream>
using namespace std;

template<class T, int size>
class StaticArray_BASE
{
private:
	T _array[size];

public:
	T* getArray()
	{
		return _array;
	}

	T& operator [](int index)
	{
		return _array[index];
	}

	
	void print()
	{
		for (int count = 0; count < size; ++count)
		{
			cout << (*this)[count] << ' ';

		}cout << endl;
	}
};

//StaticArray_BASE의 함수를 재사용하기 위해 상속 구조를 만듬
template<class T, int size>
class StaticArray : public StaticArray_BASE<T, size>
{

};

//상속받은 클래스의 멤버를 specialization
template< int size>
class StaticArray<char, size> : public StaticArray_BASE<char, size>
{
public:
	//함수 오버라이딩
	void print()
	{
		for (int count = 0; count < size; ++count)
		{
			cout << (*this)[count];

		}cout << endl;
	}

};

////char type에 대해 specialize
//template< int size>
//void print(StaticArray<char, size>& array)
//{
//	for (int count = 0; count < size; ++count)
//	{
//		cout << array[count] ;
//
//	}cout << endl;
//}

int main()
{

	StaticArray<int, 4> int4;
	int4[0] = 1;
	int4[1] = 2;
	int4[2] = 3;
	int4[3] = 4;

	int4.print();

	StaticArray<char, 14> char14; 
	char14[0] = 'H';
	char14[1] = 'e';

	strcpy_s(char14.getArray(), 14, "Hello, World");
	char14.print(); //char type에 대해 specialize된 템플릿 함수가 호출됨

	return 0;
}

