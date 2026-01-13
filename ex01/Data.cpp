/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 00:48:29 by lomont            #+#    #+#             */
/*   Updated: 2026/01/13 18:56:11 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data( void ) : _name("MyNameIsAlban"), _age(3) {
	return ;
}

Data::Data( const Data& src ) {
	(void)src;
	return;
}

Data& Data::operator=( const Data& other ) {
	(void)other;
	return (*this);
}

Data::~Data( void ) {
	return ;
}

std::string& Data::getName( void ) {
	return (_name);
}

int& Data::getAge( void ) {
	return (_age);
}
