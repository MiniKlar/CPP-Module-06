/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 12:56:50 by lomont            #+#    #+#             */
/*   Updated: 2026/01/01 19:08:45 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef UTILS_HPP
#define UTILS_HPP

#include <cctype>
#include <cstdlib>
#include <string>
#include <iostream>
#include <iomanip>

enum typeVar {
	_CHAR,
	_INT,
	_FLOAT,
	_DOUBLE,
	_ERROR
};

typeVar checkTypeVariable(const char *str);
bool	checkErrors(const char *str);
void	printError(const std::string& printChar, const std::string& printInt, const std::string& printFloat, const std::string& printDouble);
void	printValue(char c, int i, float f, double d, bool verbose[4]);
bool	checkSpecialCharacters(std::string str);

#endif
