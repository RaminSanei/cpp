#include "iter.hpp"

template <typename T> void iter(T *adr, size_t len, void (*functionPtr)(T))
{
	if (static_cast<int>(len) < 0)
		return ;
	for (size_t i = 0; i < len; i++)
		functionPtr(adr[i]);
	return ;
}

template <typename T, typename Func> void iter(T *adr, size_t len, Func fnc)
{
	if (static_cast<int>(len) < 0)
		return ;
	for (size_t i = 0; i < len; i++)
		fnc(*(adr + i));
	return ;
}

template <typename T> void print_message(T str)
{
	std::cout << str <<" ";
}

