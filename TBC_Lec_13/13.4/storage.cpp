#include "storage.h"

//calss memeber function specialization w.r.t template
//이 부분을 cpp에 정의해놓으면 main에서 specialization을 할 수 없게된다(해결법: storage.cpp를 main에서 include하거나 아래 정의를 storage.h에 옮겨야함)
template<>
void Storage<double>::print()
{
	std::cout << "Double Type ";
	std::cout << std::scientific << _value << std::endl;
}
