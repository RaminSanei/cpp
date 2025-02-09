/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssanei <ssanei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 06:50:42 by ssanei            #+#    #+#             */
/*   Updated: 2025/02/09 06:50:43 by ssanei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include "Utils.hpp"

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

typedef std::string str;

template <typename T> class Array
{
  private:
	T *_array;
	unsigned int n;

  public:
	Array();
	Array(int n);
	~Array();
	Array(const Array &copy);
	Array &operator=(const Array &other);

	T &operator[](unsigned int i) const;
	int size() const;
    T const *getStartAddress(void) const;
	class InvalidIndexException : public std::exception
	{
		public:
		virtual const char *what() const _NOEXCEPT override;
	};
};

template <typename T> std::ostream &operator<<(std::ostream &o,	Array<T> const &ref);

# include "Array.tpp"
#endif