/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:20:01 by gbrunet           #+#    #+#             */
/*   Updated: 2024/03/28 08:18:56 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include "style.h"

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << BOLD << RED << "Error: Invalid argument(s)" << END_STYLE << std::endl;
		std::cerr << RED << "Type ./convert [CHAR / INT / FLOAT / DOUBLE]" << END_STYLE << std::endl;
		std::cerr << YELLOW  << "Examples :" << END_STYLE << std::endl;
		std::cerr << YELLOW << THIN << "./convert c" << std::endl;
		std::cerr << "./convert -123" << std::endl;
		std::cerr << "./convert +23.57f" << std::endl;
		std::cerr << "./convert 7594.045" << END_STYLE << std::endl;
		return (1);
	}
	ScalarConverter::convert(av[1]);
	return (0);
}
