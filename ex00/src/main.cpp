/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:42:41 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/28 19:41:53 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

/// an iterator in c++ is an element that allows us to travel
// through the elements of a contaner -> way to access and 
// manipulate the elements in a containerwithout needing to 
// know the underlying data structure of the container.

// Const Iterator: It is used for read-only access to the 
// /elements in the container. It ensures that you cannot
//  modify the elements through this iterator.

int	main(void)
{
	std::list<int>					lst1;
	std::list<int>::const_iterator	it;

	///////////////////////////////////////
	{
		std::vector<int>			vector;
		int							result;
		vector.push_back(1);
		vector.push_back(12);
		vector.push_back(1998);
		vector.push_back(3);

		try {
		
			result = const_iterator(vector, i);
			std::cout << "Vector : " << result << "\n";
		}
		catch (std::exception& e)
		{
			std::cerr << "Error: " << e.what();
		}
	}
	
	return (0);
}
