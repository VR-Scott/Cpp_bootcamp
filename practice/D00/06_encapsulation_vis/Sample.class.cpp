/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:53:57 by vscott            #+#    #+#             */
/*   Updated: 2020/01/24 17:49:37 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"


Sample::Sample( void ) {	//Constuctor and Destructor Do NOT have return types.

	std::cout << "Constructor called" << std::endl;

	this->publicFoo = 0;
	std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
	this->_privateFoo = 0;
	std::cout << "this->_privateFoo: " << this->_privateFoo << std::endl;

	this->publicBar();
	this->_privateBar();

	return;
}

Sample::~Sample ( void ) {

	std::cout << "Destructor called" << std::endl;
	return;	// Write return to show done with Destructor;
}


void	Sample::publicBar( void ) const {

	std::cout << "Member function publicBar called" << std::endl;
	return;
}

void	Sample::_privateBar( void ) const {

	std::cout << "Member function _privateBar called" << std::endl;
	return;
}

//****************************************************************************//
