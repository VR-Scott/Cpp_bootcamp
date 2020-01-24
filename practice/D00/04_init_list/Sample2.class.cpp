/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:53:57 by vscott            #+#    #+#             */
/*   Updated: 2020/01/24 12:34:43 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample2.class.hpp"


Sample2::Sample2( char p1, int p2, float p3 ) : a1(p1), a2(p2), a3(p3) {	//: a1(p1) Init list.

	std::cout << "Constructor called" << std::endl;
	std::cout << "this->a1: " << this->a1 << std::endl;
	std::cout << "this->a2: " << this->a2 << std::endl;
	std::cout << "this->a3: " << this->a3 << std::endl;
}

Sample2::~Sample2 ( void ) {

	std::cout << "Destructor called" << std::endl;
	return;	// Write return to show done with Destructor;
}



//****************************************************************************//
