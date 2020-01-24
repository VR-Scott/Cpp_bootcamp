/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:33:15 by vscott            #+#    #+#             */
/*   Updated: 2020/01/24 10:40:59 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int		main( void ) {

	char	buff[512];

	std::cout << "Hello world !" << std::endl;		// << - Back arrow, endl - carraige return (works for both iOS and Linux)

	std::cout << "Input a word: ";
	std::cin >> buff;
	std::cout << "You entered: [" << buff << "]" << std::endl;

	return 0;
}
