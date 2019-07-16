#include "MyArray.h"

template<typename T>
void MyArray<T>::print()
{
	for (int i = 0; i < _length; ++i)
		std::cout << _data[i] << " ";
	std::cout << std::endl;
}

//explicit instanciation(���� �ν��Ͻÿ��̼��� ����� �ϴ� ��Ȳ)
//template void MyArray<char>::print();
//template void MyArray<double>::print();


template class MyArray<char>;
template class MyArray<double>;