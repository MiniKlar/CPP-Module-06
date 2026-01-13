/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 00:48:32 by lomont            #+#    #+#             */
/*   Updated: 2026/01/13 18:56:44 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef	DATA_HPP
#define DATA_HPP

#include <iostream>

class Data
{
	private:
		std::string _name;
		int			_age;
	public:
		Data( void );
		Data( const Data& src );
		Data& operator=( const Data& other );
		~Data( void );
		std::string&	getName( void );
		int&			getAge( void );
};

#endif
