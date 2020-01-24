/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:50:26 by vscott            #+#    #+#             */
/*   Updated: 2020/01/24 16:52:12 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Sample_CLASS_H
# define Sample_CLASS_H

class Sample {

public:

	float const	pi;
	int			qd;

	Sample( float const f );		//Constuctor
	~Sample( void );	//Destructor

	void	bar( void ) const;	// const Tells compiler that this member function won't alter current instance
};


#endif // ****************************************************** Sample_CLASS_H //
