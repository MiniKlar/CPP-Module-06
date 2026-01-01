/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CheckOverflow.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 00:03:39 by lomont            #+#    #+#             */
/*   Updated: 2025/12/30 23:19:53 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CHECKOVERFLOW_HPP
#define CHECKOVERFLOW_HPP

#include <climits>
#include <cmath>
#include <cfloat>

void	checkOverflow(bool (*verbose)[4], double d);

#endif
