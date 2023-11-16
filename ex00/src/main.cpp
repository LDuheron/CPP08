/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:42:41 by lduheron          #+#    #+#             */
/*   Updated: 2023/11/16 17:16:47 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

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
		result = easyfind(vector, 1);
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
