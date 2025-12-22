/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 00:48:29 by lomont            #+#    #+#             */
/*   Updated: 2025/12/23 00:53:43 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data( void ) : str("Salut") {
	return ;
}

Data::~Data( void ) {
	return ;
}

std::string& Data::getName( void ) {
	return (str);
}
