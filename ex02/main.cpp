/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 21:48:37 by lomont            #+#    #+#             */
/*   Updated: 2025/12/23 23:07:18 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Type.hpp"
#include <iostream>

int main( void ) {
	Base* ptr = generate();
	Base& _ptr = *ptr;
	if (!ptr) {
		std::cout << "ptr is NULL, exiting program ..." << std::endl;
		return (1);
	}
	identify(ptr);
	identify(_ptr);
	delete ptr;
	return (0);
}
