/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 00:41:00 by lomont            #+#    #+#             */
/*   Updated: 2025/12/23 00:51:53 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>

class Data;

class Serializer
{
	public:
		Serializer( void );
		virtual ~Serializer( void ) = 0;
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
