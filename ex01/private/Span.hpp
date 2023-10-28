/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:12:15 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/27 15:37:58 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Span_HPP
# define Span_HPP

# include <algorithm>
# include <iostream>
# include <limits.h>
# include <list>

#define SUCCESS 0
#define ERROR 1	

class Span
{
	private:
		std::list<int>	list;	
		Span();
		// Span(Span const & src);

	public:

		Span(unsigned int N);
	
		~Span();

		// Span &	operator=(Span const & rhs);
};

// std::ostream & operator<<(std::ostream & lhs, Span const & rhs);

#endif
