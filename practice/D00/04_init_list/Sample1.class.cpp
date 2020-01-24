/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:53:57 by vscott            #+#    #+#             */
/*   Updated: 2020/01/24 12:34:43 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"


Sample1::Sample1( char p1, int p2, float p3 ) {	//Constuctor and Destructor Do NOT have return types.

	std::cout << "Constructor called" << std::endl;

	this->a1 = p1;
	std::cout << "this->a1: " << this->a1 << std::endl;

	this->a2 = p2;
	std::cout << "this->a2: " << this->a2 << std::endl;

	this->a3 = p3;
	std::cout << "this->a3: " << this->a3 << std::endl;

	return;	// Write return to show done with Constructor;
}

Sample1::~Sample1 ( void ) {

	std::cout << "Destructor called" << std::endl;
	return;	// Write return to show done with Destructor;
}



//****************************************************************************//
