/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:53:57 by vscott            #+#    #+#             */
/*   Updated: 2020/01/24 12:09:28 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"


Sample::Sample( void ) {	//Constuctor and Destructor Do NOT have return types.

	std::cout << "Constructor called" << std::endl;
	return;	// Write return to show done with Constructor;
}

Sample::~Sample ( void ) {

	std::cout << "Destructor called" << std::endl;
	return;	// Write return to show done with Destructor;
}

void	Sample::bar( void ) {

	std::cout << "Member func bar called" << std::endl;
	return;
}


//****************************************************************************//
