/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssanei <ssanei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 15:48:41 by ssanei            #+#    #+#             */
/*   Updated: 2025/02/08 15:48:44 by ssanei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
#include <string>
#include <iostream>


typedef std::string str;
# define EXIT_SUCCESS 0

template <typename T, typename Func> void iter(T *adr, size_t len, Func fnc);

template <typename T> void iter(T *adr, size_t len, void (*functionPtr)(T));

template <typename T> void print_message(T &str);
#endif