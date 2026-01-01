/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CheckOverflow.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 00:31:50 by lomont            #+#    #+#             */
/*   Updated: 2025/12/30 23:45:23 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CheckOverflow.hpp"
#include <iostream>

static bool	checkCharOverflow(double d) {
	if (d < 0 || d > 127)
		return (false);
	else if (std::isnan(d) || std::isinf(d))
		return (false);
	return (true);
}

static bool	checkIntOverflow(double d) {
	if (d < INT_MIN || d > INT_MAX)
		return (false);
	else if (std::isnan(d) || std::isinf(d))
		return (false);
	return (true);
}

static bool	checkFloatOverflow(double d) {
	if (d < -FLT_MAX || d > FLT_MAX) {
		std::cout << "x" << std::endl;
		return (false);
	}
	else if (std::isnan(d) || std::isinf(d))
		return (false);
	return (true);
}

void	checkOverflow(bool (*verbose)[4], double d) {
	(*verbose)[0] = checkCharOverflow(d);
	(*verbose)[1] = checkIntOverflow(d);
	(*verbose)[2] = checkFloatOverflow(d);
	(*verbose)[3] = true;
}
