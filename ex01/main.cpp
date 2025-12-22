/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 00:40:33 by lomont            #+#    #+#             */
/*   Updated: 2025/12/23 00:57:31 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main(void) {
	Data* feur = new Data;
	Data* oklm;
	uintptr_t t;
	std::cout << feur->getName() << std::endl;
	t = Serializer::serialize(feur);
	oklm = Serializer::deserialize(t);
	std::cout << oklm->getName() << std::endl;
	delete oklm;
	return (0);
}
