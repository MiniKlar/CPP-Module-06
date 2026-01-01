/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 12:56:32 by lomont            #+#    #+#             */
/*   Updated: 2026/01/01 19:13:32 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool	checkSpecialCharacters(std::string str) {
	bool	verbose[4] = {true, true, true, true};
	if (str == "\\n") {
		printValue('\n', 10, 10, 10, verbose);
		return (true);
	}
	else if (str == "\\t") {
		printValue('\t', 9, 9, 9, verbose);
		return (true);
	}
	return (false);
}

typeVar checkTypeVariable(const char *str) {
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

void printValue(char c, int i, float f, double d, bool verbose[4]) {
	if (verbose[0]) {
		if (std::isprint(static_cast<unsigned char>(c)))
			std::cout << "char: '" << c << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible"<< std::endl;
	if (verbose[1])
		std::cout << "int: " << i << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	if (verbose[2])
		std::cout << "float: " << f << "f" << std::endl;
	else
		std::cout << "float: impossible" << std::endl;
	std::cout << "double: " << d << std::endl;
}
