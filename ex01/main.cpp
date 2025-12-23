/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 00:40:33 by lomont            #+#    #+#             */
/*   Updated: 2025/12/23 21:46:05 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main( void ) {
	Data* before = new Data;
	Data* after;
	uintptr_t ptr;

	std::cout << "Voici l'adresse du pointeur before = " << before << std::endl;
	std::cout << before->getName() << std::endl;

	ptr = Serializer::serialize(before);
	std::cout << "Voici l'adresse uintptr = " << ptr << std::endl;

	if (before == reinterpret_cast<Data*>(ptr))
		std::cout << "Address are the same: before address: " << before << " ptr address: " << std::hex << ptr << std::endl;

	after = Serializer::deserialize(ptr);
	std::cout << after->getName() << std::endl;

	delete after;
	return (0);
}
