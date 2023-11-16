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

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <iterator> 
# include <iostream>
# include <limits>
# include <list>
# include <vector>

#define SUCCESS 0
#define ERROR 1	

#define DEBUG 0

class Span
{
	private:
		std::list<int>	_list;
		unsigned int	_N;

	public:
		Span();
		Span(Span const & src);
		Span(unsigned int N);
		~Span();

		template<typename T>
		void			addMoreNumbers(T start, T end);

		class FullException : public std::exception 
		{
			public:
				virtual const char* what() const throw();
		};

		class IndexOutOfBoundsException : public std::exception 
		{
			public:
				virtual const char* what() const throw();
		};

		void			addNumber(int nb);
		void			printer(void);

		unsigned int 	shortestSpan(void) const;
		unsigned int 	longestSpan(void) const;

		Span &			operator=(Span const & rhs);
};

template<typename T>
void	Span::addMoreNumbers(T start, T end)
{
	for (T it = start; it != end; ++it)
		addNumber(*it);
}

#endif
