/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:22:50 by lduheron          #+#    #+#             */
/*   Updated: 2023/11/16 16:14:26 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <algorithm>
# include <iostream>
# include <stack>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:

	MutantStack(){};
	// MutantStack(const & MutantStack src) : iterator(src.iterator) {};
	~MutantStack(){};

	typedef typename	std::deque<T>::iterator	iterator;

	typename MutantStack<T>::iterator	begin(void);
	typename MutantStack<T>::iterator	end(void);

	MutantStack &			operator=(MutantStack const & rhs)
	{
		this->iterator = rhs.iterator;
	}
};

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return (this->c.end());
}

#endif
