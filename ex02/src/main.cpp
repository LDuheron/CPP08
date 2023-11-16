/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:27:56 by lduheron          #+#    #+#             */
/*   Updated: 2023/11/16 14:43:54 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <algorithm>
# include <iostream>
# include <limits.h>
# include <stack>
# include <deque>

int main(void)
{
	std::stack<int> testStack;

	testStack.push(1);
	testStack.push(2);
	testStack.push(3);
	testStack.push(4);
	std::cout << "Before pop\n";
	std::cout << "Top : " << testStack.top();
	std::cout << "\nSize : " << testStack.size();
	testStack.pop();
	std::cout << "\nAfter pop\n";
	std::cout << "\nTop : " << testStack.top();
	std::cout << "\nSize : " << testStack.size();
	std::cout << "\n\nIs empty ? : " << testStack.empty();
	testStack.pop();
	testStack.pop();
	testStack.pop();
	std::cout << "\nIs empty ? : " << testStack.empty();
	
	return (0);
}
