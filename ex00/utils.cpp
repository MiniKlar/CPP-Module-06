/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 12:56:32 by lomont            #+#    #+#             */
/*   Updated: 2025/12/23 00:32:03 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

typeVar check_type_variable(const char *str) {
	int	i;
	typeVar	eVar;

	i = 0;
	eVar = _ERROR;
	if (isdigit(static_cast<unsigned int>(str[i])))
		eVar = _INT;
	else if (str[i] == '-' && isdigit(static_cast<unsigned int>(str[1]))) {
		eVar = _INT;
		i++;
	}
	else if (!str[i + 1]) {
		eVar = _CHAR;
		return eVar;
	}
	while (str[i]) {
		if (str[i] == 'f' && (eVar == _INT || eVar == _DOUBLE)) {
			eVar = _FLOAT;
			if (str[i + 1])
				return (_ERROR);
		}
		else if (str[i] == '.' && eVar == _INT)
			eVar = _DOUBLE;
		else if (!isdigit(static_cast<unsigned int>(str[i])) && str[i] != 'f') {
			eVar = _ERROR;
			break;
		}
		i++;
	}
	return (eVar);
}

bool checkErrors(const char *str) {
	const std::string string = str;

	if (string == "-inf" || string == "-inff") {
		printError("impossible", "impossible", "-inff", "-inf");
		return (true);
	}
	else if (string == "inf" || string == "inff" || string == "+inf" || string == "+inff") {
		printError("impossible", "impossible", "inff", "inf");
		return (true);
	}
	else if (string == "nan" || string == "nanf") {
		printError("impossible", "impossible", "nanf", "nan");
		return (true);
	}
	else
		return (false);
}

void printError(const std::string& printChar, const std::string& printInt, const std::string& printFloat, const std::string& printDouble) {
	std::cout << "char: " << printChar << std::endl << "int: " << printInt << std::endl;
	std::cout << "float: " << printFloat << std::endl << "double: " << printDouble << std::endl;
}

void printValue(char c, int i, float f, double d) {
	if (std::isprint(static_cast<unsigned char>(c)))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f" << std::endl << "double: " << d << std::endl;
}
