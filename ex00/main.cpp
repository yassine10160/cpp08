/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 13:45:18 by yafahfou          #+#    #+#             */
/*   Updated: 2026/06/09 14:43:39 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    
    try
    {
        easyfind(v, 6);
        easyfind(v, 8);
    }
    catch (const std::exception &e)
    {
        std::cout<<e.what()<<std::endl;
    }
}