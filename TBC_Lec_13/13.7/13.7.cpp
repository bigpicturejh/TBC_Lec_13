#include <iostream>
using namespace std;


template<class T>
class A
{
private:
	T _value;

public:
	A(const T& input)
		:_value(input)
	{

	}

	void print()
	{
		cout << _value << endl;
	}
};

//pointer를 받을때만 동작하도록 specialization
template<class T>
class A<T*>
{
private:
	T* _value;

public:
	A(T* input)
		:_value(input)
	{

	}

	void print()
	{
		cout << *_value << endl;
	}
};

int main()
{

	A<int> a_int(123);
	a_int.print();

	int temp = 456;
	A<int*> a_int_ptr(&temp);
	a_int_ptr.print();

	double temp_d = 3.141592;
	A<double*> a_double_ptr(&temp_d);
	a_double_ptr.print();


	return 0;
}

