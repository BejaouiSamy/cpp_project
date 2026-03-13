#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T>
void	iter(T *array, std::size_t length, void (*function)(T &))
{
	if (!array || !function)
		return ;
	std::size_t i = 0;
	while (i < length)
		function(array[i++]);
}

template <typename T>
void	iter(T const *array, std::size_t length, void (*function)(T const &))
{
	if (!array || !function)
		return ;
	std::size_t i = 0;
	while (i < length)
		function(array[i++]);
}

#endif