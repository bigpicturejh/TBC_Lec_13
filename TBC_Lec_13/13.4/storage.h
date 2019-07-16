#pragma once

#include <iostream>

template<class T>
class Storage
{
private:
	T _value;

public:
	Storage(T value)
	{
		_value = value;
	}
	~Storage()
	{

	}

	void print()
	{
		std::cout << _value << std::endl;
	}
};

//calss memeber function specialization w.r.t template
template<>
void Storage<double>::print()
{
	std::cout << "Double Type ";
	std::cout << std::scientific << _value << std::endl;
}
