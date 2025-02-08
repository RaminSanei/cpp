/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssanei <ssanei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:54:53 by ssanei            #+#    #+#             */
/*   Updated: 2025/02/08 14:53:53 by ssanei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

template <typename T> void swap(T &arg1, T &arg2)
{
	T	tempArg;

	tempArg = arg1;
	arg1 = arg2;
	arg2 = tempArg;
}


template <typename T> T min(T arg1, T arg2)
{
    return (arg1 < arg2 ? arg1 : arg2);
}

template <typename T> T max(T arg1, T arg2)
{
    return (arg1 > arg2 ? arg1 : arg2);
}

