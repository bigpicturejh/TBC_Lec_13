#include "Cents.h"
using namespace std;

template<typename T>
T getMax(T x, T y)
{
	return (x > y) ? x : y;
}



int main()
{

	cout << getMax(1, 2) << endl;
	cout << getMax(1.2314, 2.55123) << endl;
	cout << getMax(1.23141333f, 2.5512344f) << endl;
	cout << getMax('a', 'k') << endl;

	cout << getMax(Cents(5), Cents(9)) << endl; //클래스를 템플릿으로 사용할 수 있지만 사용자 정의에 따른 연산자 오버로딩 같은 전처리 작업이 필요함
	return 0;
}

