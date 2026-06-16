/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 13:45:18 by yafahfou          #+#    #+#             */
/*   Updated: 2026/06/16 00:00:00 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main()
{
    std::cout << "--- vector ---" << std::endl;
    std::vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    try
    {
        std::cout << "found: " << *easyfind(v, 6) << std::endl;
        std::cout << "found: " << *easyfind(v, 8) << std::endl;
    }
    catch (const std::exception &e) { std::cout << e.what() << std::endl; }

    std::cout << "--- list ---" << std::endl;
    std::list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    try
    {
        std::cout << "found: " << *easyfind(l, 20) << std::endl;
        std::cout << "found: " << *easyfind(l, 99) << std::endl;
    }
    catch (const std::exception &e) { std::cout << e.what() << std::endl; }

    std::cout << "--- deque ---" << std::endl;
    std::deque<int> d;
    d.push_back(100);
    d.push_back(200);
    d.push_back(300);
    try
    {
        std::cout << "found: " << *easyfind(d, 100) << std::endl;
        std::cout << "found: " << *easyfind(d, 0) << std::endl;
    }
    catch (const std::exception &e) { std::cout << e.what() << std::endl; }

    return 0;
}
