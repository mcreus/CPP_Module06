/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:58:21 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/24 10:50:33 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char* av[]) 
{
    if (argc != 2) 
	{
        std::cerr << "Please put the good number of arguments" << std::endl;
        return 1;
    }
    ScalarConverter::convert(av[1]);

    return (0);
}