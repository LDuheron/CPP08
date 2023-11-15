/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:42:41 by lduheron          #+#    #+#             */
/*   Updated: 2023/11/15 15:39:20 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

// an iterator in c++ is an element that allows us to travel
// through the elements of a contaner -> way to access and 
// manipulate the elements in a containerwithout needing to 
// know the underlying data structure of the container.

// Const Iterator: It is used for read-only access to the 
// elements in the container. It ensures that you cannot
// modify the elements through this iterator.

// containers associatif = stocke des elements associes a une clef. ex: map, unordered map.
// container sequentiels = tableau ou liste 

const char*	NoMatchException::what() const throw()
{
	return ("Couldn't find any match in container content.\n");
}

void	vectorTest(void)
{
	std::cout << "Vector test \n";

	std::vector<int>					vector;
	std::vector<int>::const_iterator	result;

	vector.push_back(1);
	vector.push_back(12);
	vector.push_back(1998);
	vector.push_back(3);

	try {
		result = easyfind(vector, 12);
		std::cout << "Vector : " << *result << "\n";
	}
	catch (std::exception& e)
	{
		std::cerr << "Error: " << e.what();
	}
}

void	listTest(void)
{
	std::cout << "List test \n";

	std::list<int>					list;
	std::list<int>::const_iterator	result;
	list.push_back(1);
	list.push_back(12);
	list.push_back(1998);
	list.push_back(3);

	try {
		result = easyfind(list, 1);
		std::cout << "List : " << *result << "\n";
	}
	catch (std::exception& e)
	{
		std::cerr << "Error: " << e.what();
	}
}

int	main(void)
{
	listTest();
	vectorTest();
	return (0);
}
