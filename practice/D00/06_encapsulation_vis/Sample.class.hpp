/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:50:26 by vscott            #+#    #+#             */
/*   Updated: 2020/01/24 17:12:29 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Sample_CLASS_H
# define Sample_CLASS_H

class Sample {

public:

	int			publicFoo;

	Sample( void );		//Constuctor
	~Sample( void );	//Destructor

	void		publicBar( void ) const;	// const Tells compiler that this member function won't alter current instance

private:

	int			_privateFoo;

	void		_privateBar( void ) const;

};


#endif // ****************************************************** Sample_CLASS_H //
