/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 13:21:45 by yafahfou          #+#    #+#             */
/*   Updated: 2026/06/09 14:47:33 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>


class NotFoundException : public std::exception
{
    public:
        const char* what() const throw(){ return "Element Not Found"; }
};

template<typename T>
void easyfind(T &arr, int element)
{
    typename T::iterator it = std::find(arr.begin(), arr.end(), element);
    if (it == arr.end())
        throw NotFoundException();
    std::cout<<"Element Found: "<<*it<<std::endl;
}

#endif