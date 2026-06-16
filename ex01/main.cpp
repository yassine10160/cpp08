/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 10:53:51 by yafahfou          #+#    #+#             */
/*   Updated: 2026/06/16 00:00:00 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    std::cout << "--- basic test (subject) ---" << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "shortest: " << sp.shortestSpan() << std::endl;
    std::cout << "longest:  " << sp.longestSpan() << std::endl;

    std::cout << "\n--- addNumbers with iterator range ---" << std::endl;
    Span sp2 = Span(10);
    std::vector<int> src;
    src.push_back(42);
    src.push_back(1);
    src.push_back(99);
    src.push_back(7);
    src.push_back(55);
    sp2.addNumbers(src.begin(), src.end());
    std::cout << "shortest: " << sp2.shortestSpan() << std::endl;
    std::cout << "longest:  " << sp2.longestSpan() << std::endl;

    std::cout << "\n--- exception: capacity reached ---" << std::endl;
    try
    {
        sp.addNumber(100);
    }
    catch (const std::exception &e) { std::cout << e.what() << std::endl; }

    std::cout << "\n--- exception: addNumbers exceeds capacity ---" << std::endl;
    try
    {
        Span sp3 = Span(3);
        sp3.addNumbers(src.begin(), src.end());
    }
    catch (const std::exception &e) { std::cout << e.what() << std::endl; }

    std::cout << "\n--- exception: not enough numbers for span ---" << std::endl;
    try
    {
        Span sp4 = Span(5);
        sp4.addNumber(1);
        std::cout << sp4.shortestSpan() << std::endl;
    }
    catch (const std::exception &e) { std::cout << e.what() << std::endl; }

    std::cout << "\n--- copy constructor ---" << std::endl;
    Span sp5(sp);
    std::cout << "shortest: " << sp5.shortestSpan() << std::endl;
    std::cout << "longest:  " << sp5.longestSpan() << std::endl;

    return 0;
}
