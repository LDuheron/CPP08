/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:12:32 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/27 15:37:30 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Constructor -----------------------------------------------------------------

Span::Span()
{
	// std::cout << "Default constructor called.\n";
}

Span::Span(unsigned int N) : _list(), _N(N)
{
	(void) _N;
	// std::cout << "Constructor param N called.\n";
}

Span::Span(Span const & src) : _list(src._list), _N(src._N)
{
	// std::cout << "Copy constructor called.\n";
}

// Destructor ------------------------------------------------------------------

Span::~Span()
{
	// std::cout << "Destructor called.\n";
}

// Accessors -------------------------------------------------------------------

// Overload --------------------------------------------------------------------

// Span &	Span::operator=(Span const & rhs)
// {
// 	int size = rhs.list.size();
// 	for (int i = 0; i < size; i++)
// 		this->list[i] = rhs.list[i];
// 	return *this;
// }

// std::ostream & operator<<(std::ostream & lhs, Span const & rhs)
// {
// 	lhs << ".\n";
// 	return lhs;
// }

// Functions -------------------------------------------------------------------


// method addNumber()

// void	Span::addNumber(int	nb)
// {
// 	if ()
// 	this->list.pushback();
// }


// shortestSpan() : trouver la plus petite distance entre les nombres stockes
// longestSpan()

