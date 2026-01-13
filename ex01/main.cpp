/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 00:40:33 by lomont            #+#    #+#             */
/*   Updated: 2026/01/13 18:57:15 by lomont           ###   ########.fr       */
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
	std::cout << before->getAge() << std::endl;

	ptr = Serializer::serialize(before);
	std::cout << "Voici l'adresse uintptr = " << ptr << std::endl;

	if (before == reinterpret_cast<Data*>(ptr))
		std::cout << "Address are the same: before address: " << before << " ptr address: " << std::hex << ptr << std::endl;

	after = Serializer::deserialize(ptr);
	std::cout << after->getName() << std::endl;
	std::cout << after->getAge() << std::endl;

	delete after;
	return (0);
}
