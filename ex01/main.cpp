/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 22:28:15 by lduheron          #+#    #+#             */
/*   Updated: 2023/11/16 14:20:23 by lduheron         ###   ########.fr       */
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

void	bonusTest(void)
{
	std::cout << "Bonus test : \n";

	Span span;
	std::list<int> dataBase;
	
	for (int i = 0; i < 50; i++)
		dataBase.push_back(i);

	std::list<int>::const_iterator start = dataBase.begin();
	std::list<int>::const_iterator end = dataBase.end();
	span.addMoreNumbers(start, end);
	std::cout << span.longestSpan();	
}85/528

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: usage is ./ex01 <size list>\n";
		return (ERROR);
	}

	subjectTest();
	myTest(argv);
	bonusTest();

	return (0);
}