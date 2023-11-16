/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 22:28:15 by lduheron          #+#    #+#             */
/*   Updated: 2023/11/16 11:10:25 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

void	subjectTest(void)
{
	std::cout << "Subject test : \n";
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

}

void	myTest(char **argv)
{
	std::cout << "My test : \n";

	Span span(atoi(argv[1]));

	try
	{
		span.addNumber(4);
		span.addNumber(5);
		span.addNumber(6); 
		span.addNumber(7);
		std::cout << span.shortestSpan();
		std::cout << span.longestSpan() << std::endl;

	}
	catch (std::exception& e)
	{
		std::cout << "Error: "  << e.what();
	}
}


int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: usage is ./ex01 <size list>\n";
		return (ERROR);
	}

	subjectTest();
	myTest(argv);
	

	return (0);
}