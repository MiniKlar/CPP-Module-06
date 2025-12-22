/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 12:10:02 by lomont            #+#    #+#             */
/*   Updated: 2025/12/23 00:22:56 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "utils.hpp"

ScalarConverter::ScalarConverter( void ) {
	return ;
}

ScalarConverter::ScalarConverter( const ScalarConverter &src ) {
	(void)src;
	return ;
}

ScalarConverter& ScalarConverter::operator=( const ScalarConverter &other ) {
	(void)other;
	return (*this);
}

void ScalarConverter::convert(const char *str) {
	enum	typeVar eResult;
	char			c;
	int				i;
	float			f;
	double			d;

	if (checkErrors(str))
		return ;
	eResult = check_type_variable(str);
	switch (eResult)
	{
		case _CHAR:
			c = static_cast<char>(str[0]);
			i = static_cast<int>(str[0]);
			f = static_cast<float>(i);
			d = static_cast<double>(f);
			break;
		case _INT:
			i = static_cast<int>(atoi(str));
			c = static_cast<char>(i);
			f = static_cast<float>(i);
			d = static_cast<double>(f);
			break;
		case _FLOAT:
			f = static_cast<float>(atof(str));
			i = static_cast<int>(f);
			c = static_cast<char>(i);
			d = static_cast<double>(f);
			break;
		case _DOUBLE:
			d = static_cast<double>(atof(str));
			f = static_cast<float>(d);
			i = static_cast<int>(f);
			c = static_cast<char>(i);
			break;
		case _ERROR:
			std::cout << "Type conversion is impossible! Please check your input" << std::endl;
			return ;
		default:
			std::cout << "Error when checking variable type" << std::endl;
			break;
	}
	printValue(c, i, f, d);
	return ;
}


