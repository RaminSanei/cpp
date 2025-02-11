/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssanei <ssanei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 06:50:50 by ssanei            #+#    #+#             */
/*   Updated: 2025/02/09 06:50:51 by ssanei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template <typename T> Array<T>::Array() : _array(NULL), n(0)
{
	print_message("Array default constructor called");
}

template <typename T> Array<T>::Array(int n) : _array(new T[n]), n(n)
{
	print_message("Array constructor called");
}

template <typename T> Array<T>::~Array()
{
	print_message("Array destructor called");
	if (_array)
		delete[] _array;
}

template <typename T> Array<T>::Array(const Array &copy) : n(copy.n)
{
	print_message("Array copy constructor called");
	_array = new T[n];
	*this = copy;
}

template <typename T> Array<T> &Array<T>::operator=(const Array &src)
{
	print_message("Array assignation operator called");
	if (this == &src)
		return (*this);
	if (_array)
		delete[] _array;
	n = src.n;
	_array = new T[n];
	for (unsigned int i = 0; i < n; i++)
		_array[i] = src._array[i];
	return (*this);
}

template <typename T> T &Array<T>::operator[](unsigned int i) const
{
	if (i >= n)
		throw Array::InvalidIndexException();
	return (_array[i]);
}

template <typename T> int Array<T>::size() const
{
	return (n);
}

template <typename T> const char *Array<T>::InvalidIndexException::what() const _NOEXCEPT
{
	return ("Invalid index");
}

template <typename T> T const *Array<T>::getStartAddress(void) const
{
	return (this->_array);
}

template <typename T> std::ostream &operator<<(std::ostream &o,
	Array<T> const &src)
{
	o << "Size: " << src.size() << std::endl;
	o << "First index Address: " << src.getStartAddress() << std::endl;
	for (int i = 0; i < src.size(); i++)
		o << "Value at index " << i << ": " << (const_cast<Array<T> &>(src))[i] << std::endl;
	return (o);
}

#endif