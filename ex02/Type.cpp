/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 22:03:02 by lomont            #+#    #+#             */
/*   Updated: 2025/12/23 23:46:17 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Type.hpp"

Base* generate( void ) {
	size_t	result;

	std::srand(static_cast<unsigned int>(std::time(0)));
	result = std::rand() % (3 - 1 + 1) + 1;

	switch (result)
	{
		case 1: {
			A *a = new A;
			return (a);
			break;
		}
		case 2: {
			B *b = new B;
			return (b);
			break;
		}
		case 3: {
			C *c = new C;
			return (c);
			break;
		}
		default:
			return (NULL);
			break;
	}
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "Actual type of the object pointed by p: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Actual type of the object pointed by p: B" << std::endl;
	else
		std::cout << "Actual type of the object pointed by p: C" << std::endl;
}

void identify(Base& p) {
	try {
		A& a = dynamic_cast<A &>(p);
		std::cout << "Actual type of the object referenced by p: A" << std::endl;
		(void)a;
		return ;
	}
	catch ( std::exception& bc) {}
	try {
		B& b = dynamic_cast<B &>(p);
		std::cout << "Actual type of the object referenced by p: B" << std::endl;
		(void)b;
		return ;
	}
	catch ( std::exception& bc) {}
	try {
		C& c = dynamic_cast<C &>(p);
		std::cout << "Actual type of the object referenced by p: C" << std::endl;
		(void)c;
		return ;
	}
	catch ( std::exception& bc) {}
}
