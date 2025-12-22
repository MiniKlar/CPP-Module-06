/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 12:11:49 by lomont            #+#    #+#             */
/*   Updated: 2025/12/22 03:42:25 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "utils.hpp"
#include <iostream>

int	main( int argc, char **argv ) {
	ScalarConverter::convert(argv[argc - 1]);
	return (0);
}
