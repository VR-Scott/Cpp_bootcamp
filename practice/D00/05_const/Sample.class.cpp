/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:53:57 by vscott            #+#    #+#             */
/*   Updated: 2020/01/24 16:59:20 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"


Sample::Sample( float const f ) :pi( f ), qd(42) {	//Constuctor and Destructor Do NOT have return types.

	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample ( void ) {

	std::cout << "Destructor called" << std::endl;
	return;	// Write return to show done with Destructor;
}

void	Sample::bar( void ) const {

	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;

	return;
}



//****************************************************************************//
