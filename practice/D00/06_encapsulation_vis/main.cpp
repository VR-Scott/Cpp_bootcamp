/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 11:12:32 by vscott            #+#    #+#             */
/*   Updated: 2020/01/24 17:52:45 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int		main() {

	Sample instance;
	
	instance.publicFoo = 42;
	std::cout << "instance.publicFoo: " << instance.publicFoo << std::endl;
	//instance._privateFoo = 42;
	//std::cout << "instance._privateFoo: " << instance._privateFoo << std::endl;
	

	//instance.publicBar();
	//instance._privateBar();

	return 0;

}
