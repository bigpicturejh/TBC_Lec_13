﻿#include "MyArray.h"
using namespace std;




int main()
{

	MyArray<double> my_array(10); //class template argument가 필요함<double>

	for (int i = 0; i < my_array.getLength(); ++i)
	{
		my_array[i] = i +65;

	}

	my_array.print();

	return 0;
}

  