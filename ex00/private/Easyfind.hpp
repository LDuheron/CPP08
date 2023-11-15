/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:12:15 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/27 15:37:58 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <limits.h>
# include <list>
# include <deque>
# include <string>
# include <vector>

#define SUCCESS 0
#define ERROR 1

class NoMatchException : public std::exception 
{
	public:
		virtual const char* what() const throw();
};

template <typename Container>
typename Container::const_iterator easyfind(Container const &container, int const a)
{
	typename Container::const_iterator	result;

	result = find(container.begin(), container.end(), a);
	if (*result == a)
		return (result);
	throw(NoMatchException());
}

#endif
