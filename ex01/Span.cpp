/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 10:48:31 by yafahfou          #+#    #+#             */
/*   Updated: 2026/06/16 15:23:21 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0){}

Span::Span(unsigned int N) : _N(N){}

Span::Span(const Span &other) : _N(other._N), _vec(other._vec){}

Span::~Span(){}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        this->_N = other._N;
        this->_vec = other._vec;
    }
    return *this;
}

void Span::addNumber(int num)
{
    if (_vec.size() >= _N)
        throw std::out_of_range("Cannot add more numbers, capacity reached.");
    _vec.push_back(num);
}

int Span::shortestSpan()
{
    if (_vec.size() < 2)
        throw NotEnoughNumbersException();
    std::vector<int> sortedVec = _vec;
    std::sort(sortedVec.begin(), sortedVec.end());
    int minSpan = std::numeric_limits<int>::max();
    for (size_t i = 1; i < sortedVec.size(); ++i)
    {
        int span = sortedVec[i] - sortedVec[i - 1];
        if (span < minSpan)
            minSpan = span;
    }
    return minSpan;
}

int Span::longestSpan()
{
    if (_vec.size() < 2)
        throw NotEnoughNumbersException();
    int minVal = *std::min_element(_vec.begin(), _vec.end());
    int maxVal = *std::max_element(_vec.begin(), _vec.end());
    return maxVal - minVal;
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if ((size_t)std::distance(begin, end) + _vec.size() > _N)
        throw std::out_of_range("Cannot add more numbers, capacity reached.");
    _vec.insert(_vec.end(), begin, end);
}