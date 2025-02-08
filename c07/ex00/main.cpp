/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssanei <ssanei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:54:53 by ssanei            #+#    #+#             */
/*   Updated: 2025/02/08 14:54:30 by ssanei           ###   ########.fr       */
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

int main( void ) 
{
    int arg1 = 5;
    int arg2 = 8;
    print_message("arg1 = " + std::to_string(arg1) + ", arg2 = " + std::to_string(arg2));
    ::swap( arg1, arg2 );
    print_message("arg1 = " + std::to_string(arg1) + ", arg2 = " + std::to_string(arg2));
    print_message("min( arg1, arg2 ) = " + std::to_string(::min(arg1, arg2)));
    print_message("max( arg1, arg2 ) = " + std::to_string(::max(arg1, arg2)));
    str str1 = "chaine1";
    str str2 = "chaine2";
    print_message("str1 = " + str1 + ", str2 = " + str2);
    ::swap(str1, str2);
    print_message("str1 = " + str1 + ", str2 = " + str2);
    print_message("min( str1, str2 ) = " + ::min(str1, str2));
    print_message("max( str1, str2 ) = " + ::max(str1, str2));
    return EXIT_SUCCESS;
}