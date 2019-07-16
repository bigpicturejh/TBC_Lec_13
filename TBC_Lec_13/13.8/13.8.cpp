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

	template<typename TT>
	void ds(const TT& input)
	{
		cout << typeid(T).name() << " " << typeid(TT).name() << endl;
		cout << (TT)_value << endl;
	}

	void print()
	{
		cout << _value << endl;
	}
};



int main()
{

	//A<int> a_int(123);
	//a_int.print();

	A<char> a_char('A');
	a_char.print();

	a_char.ds(100);
	//a_char.ds(int()); //위와 동일
	return 0;
}

