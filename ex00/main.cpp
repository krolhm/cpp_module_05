/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:31:49 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/14 14:30:34 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "Test grade = 0" << std::endl;
    try
    {
        Bureaucrat zero("zero", 0);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "Test grade = 155" << std::endl;
    try
    {
        Bureaucrat one("one", 155);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "Test grade = 1" << std::endl;
    try
    {
        Bureaucrat two("two", 1);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    Bureaucrat decrement("decrement", 42);
    std::cout << std::endl << decrement << std::endl;
    decrement.decrementGrade();
    std::cout << std::endl << decrement << std::endl;
    
    Bureaucrat increment("increment", 13);
    std::cout << std::endl << increment << std::endl;
    increment.incrementGrade();
    std::cout << std::endl << increment << std::endl;

    return (0);    
}