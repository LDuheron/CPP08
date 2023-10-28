/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 22:28:15 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/28 22:50:59 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: usage is ./ex01 <size list>\n";
		return (ERROR);
	}
	Span span((unsigned int)atoi(argv[1]));
	return (0);
}