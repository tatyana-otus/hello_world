#include <iostream>
#include "lib.h"

/*!
	\brief Родительский класс, не несущий никакой смысловой нагрузки

	Данный класс имеет только одну простую цель: проиллюстрировать то,
	как Doxygen документирует наследование
	new
	new comment
*/
int main(int argc, char const *argv[])
{
	std::cout << "Hello, World!" << std::endl;
	std::cout << "Version " << major_version() <<"." << minor_version() << "." << patch_version() << std::endl;
	return 0;
}
