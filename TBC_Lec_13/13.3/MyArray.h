#pragma once

#include <assert.h>
#include<iostream>

template<typename T, unsigned int T_SIZE> //T_SIZE�� compile time�� �̸� ������ �Ǿ��־����
class MyArray
{
private:
	//T _length;
	T* _data;

public:
	//MyArray()
	//{
	//	_length = 0;
	//	_data = nullptr;
	//}

	MyArray()
	{
		_data = new T[T_SIZE];
		//_length = length;
	}
	~MyArray()
	{
		reset();
	}

	void reset()
	{
		delete[] _data;
		//_data = nullptr;
		//_length = 0;
	}

	T& operator [](int index)
	{
		assert(index >= 0 && index < T_SIZE);
		return _data[index];
	}

	int getLength()
	{
		return T_SIZE;
	}

	void print()
	{
		//body�� cpp�� �ű�� explicit instanciation�� ��� T_SIZE(int�� ��� "��")�� ���� �ؾ� �ϹǷ� body�� header�� ���ܵд�
		for (int i = 0; i < T_SIZE; ++i)
		{
			std::cout << _data[i] << " ";
		}std::cout << std::endl;
	}
};


