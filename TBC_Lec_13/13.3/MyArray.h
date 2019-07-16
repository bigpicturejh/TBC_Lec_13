#pragma once

#include <assert.h>
#include<iostream>

template<typename T, unsigned int T_SIZE> //T_SIZE가 compile time에 미리 결정이 되어있어야함
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
		//body를 cpp로 옮기면 explicit instanciation을 모든 T_SIZE(int의 모든 "수")에 대해 해야 하므로 body를 header에 남겨둔다
		for (int i = 0; i < T_SIZE; ++i)
		{
			std::cout << _data[i] << " ";
		}std::cout << std::endl;
	}
};


