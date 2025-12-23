/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 00:40:53 by lomont            #+#    #+#             */
/*   Updated: 2025/12/23 00:51:36 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

Serializer::Serializer( void ) {
	return ;
}

Serializer::~Serializer( void ) {
	return ;
}

uintptr_t Serializer::serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}
Data* Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}
