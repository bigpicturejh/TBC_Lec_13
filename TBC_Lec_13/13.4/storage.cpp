#include "storage.h"

//calss memeber function specialization w.r.t template
//�� �κ��� cpp�� �����س����� main���� specialization�� �� �� ���Եȴ�(�ذ��: storage.cpp�� main���� include�ϰų� �Ʒ� ���Ǹ� storage.h�� �Űܾ���)
template<>
void Storage<double>::print()
{
	std::cout << "Double Type ";
	std::cout << std::scientific << _value << std::endl;
}
