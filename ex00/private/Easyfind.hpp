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

# include <iostream>
# include <string>
# include <limits.h>
# include <map>
# include <vector>
# include <list>

#define SUCCESS 0
#define ERROR 1

class NoMatchException : public std::exception 
{
	public:
		virtual const char* what() const throw()
		{
			return ("Couldn't find any match in container content.\n");
		}
};

template <typename T>
typename T::const_iterator(T const &a, int b){

	// find function.
	throw(NoMatchException());
}

#endif
