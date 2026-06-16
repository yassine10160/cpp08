/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 14:56:35 by yafahfou          #+#    #+#             */
/*   Updated: 2026/06/16 00:00:00 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    std::cout << "--- subject test ---" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "\n--- const iterator ---" << std::endl;
    const MutantStack<int> cmstack(mstack);
    MutantStack<int>::const_iterator cit = cmstack.begin();
    MutantStack<int>::const_iterator cite = cmstack.end();
    while (cit != cite)
    {
        std::cout << *cit << std::endl;
        ++cit;
    }

    std::cout << "\n--- copy and assignment ---" << std::endl;
    MutantStack<int> mstack2 = mstack;
    mstack2.push(999);
    std::cout << "original top: " << mstack.top() << std::endl;
    std::cout << "copy top:     " << mstack2.top() << std::endl;

    std::cout << "\n--- MutantStack<std::string> ---" << std::endl;
    MutantStack<std::string> sstack;
    sstack.push("hello");
    sstack.push("world");
    sstack.push("42");
    MutantStack<std::string>::iterator sit = sstack.begin();
    while (sit != sstack.end())
    {
        std::cout << *sit << std::endl;
        ++sit;
    }

    return 0;
}
