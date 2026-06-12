/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 10:38:19 by yafahfou          #+#    #+#             */
/*   Updated: 2026/06/12 10:58:50 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <limits>

class Span
{
    private:
        unsigned int _N;
        std::vector<int> _vec;
    public:
        Span();
        Span(unsigned int N);
        ~Span();
        Span &operator=(const Span &other);
        void addNumber(int num);
        int shortestSpan();
        int longestSpan();
        void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);

        class NotEnoughNumbersException : public std::exception
        {
            public: 
                const char* what() const throw(){ return "Not enough numbers to find a span.";}
        };
};


#endif