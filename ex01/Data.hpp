/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 00:48:32 by lomont            #+#    #+#             */
/*   Updated: 2025/12/23 21:36:52 by lomont           ###   ########.fr       */
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
	public:
		Data( void );
		Data( const Data& src );
		Data& operator=( const Data& other );
		~Data( void );
		std::string& getName( void );
};

#endif
