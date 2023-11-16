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
	if (DEBUG)
		std::cout << "Default constructor called.\n";
}

Span::Span(unsigned int N) : _list(), _N(N)
{
	(void) _N;
	if (DEBUG)
		std::cout << "Constructor param N called.\n";
}

Span::Span(Span const & src) : _list(src._list), _N(src._N)
{
	if (DEBUG)
		std::cout << "Copy constructor called.\n";
}

// Destructor ------------------------------------------------------------------

Span::~Span()
{
	if (DEBUG)
		std::cout << "Destructor called.\n";
}

// Accessors -------------------------------------------------------------------

// Overload --------------------------------------------------------------------

Span &	Span::operator=(Span const & rhs)
{
	if (this != &rhs)
	{
		this->_N = rhs._N;
		this->_list = rhs._list;
	}
	return *this;
}

// Exception -------------------------------------------------------------------

const char* Span::FullException::what() const throw()
{
	return ("Container is full.\n");
}

const char* Span::listTooShortException::what() const throw()
{
	return ("Not enough numbers.\n");
}

// Functions -------------------------------------------------------------------

void	Span::addNumber(int	nb)
{
	if (this->_list.size() < this->_N)
		this->_list.push_back(nb);
	else
		throw (FullException());
}

unsigned int 	Span::shortestSpan(void) const
{
	if (this->_list.size() < 2)
	{
		std::cerr << "Error: Not enough numbers in list.\n";
		return (0);
	}

	std::list<int>	sortedCopy = this->_list;
	sortedCopy.sort();

	std::list<int>::const_iterator	it = sortedCopy.begin();
	std::list<int>::const_iterator	nextValue = it;
    ++nextValue;

	unsigned int minSpan = std::numeric_limits<int>::max();
	unsigned int span = 0;
    while (nextValue != sortedCopy.end())
	{
		span = *nextValue - *it;
        if (span < minSpan)
            minSpan = span;
        ++it;
        ++nextValue;
    }
	return (minSpan);
}

unsigned int 	Span::longestSpan(void) const
{
	if (this->_list.size() < 2)
		throw (Span::listTooShortException());

	std::list<int>	sortedCopy = this->_list;
	sortedCopy.sort();

	std::list<int>::const_iterator	it = sortedCopy.begin();
	std::list<int>::const_iterator	nextValue = it;
    ++nextValue;

	unsigned int maxSpan = 0;
	unsigned int span = 0;
    while (nextValue != sortedCopy.end())
	{
		span = *nextValue - *it;
        if (span >= maxSpan)
			maxSpan = span;
		++nextValue;
	}
	return (maxSpan);
}
