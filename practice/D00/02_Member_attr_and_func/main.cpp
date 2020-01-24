/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 11:12:32 by vscott            #+#    #+#             */
/*   Updated: 2020/01/24 12:06:48 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int		main() {

	Sample instance;

	instance.foo = 42;
	std::cout << "instance.foo: " << instance.foo << std::endl;

	instance.bar();

	return 0;

}
