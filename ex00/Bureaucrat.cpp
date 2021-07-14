/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:31:51 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/14 14:23:43 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* **************************** Coplien ******************************* */

// Default Constructor
Bureaucrat::Bureaucrat(const std::string &name, int grade) : _Name(name), _Grade(grade)
{
    if (_Grade < 1)
        throw grade_too_high_exception;
    else if (_Grade > 150)
        throw grade_too_low_exception;
}

// Copy Constructor
Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    *this = src;
}

// Destructor
Bureaucrat::~Bureaucrat()
{

}

// Assignment Operator
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
    if (this != &rhs)
        _Grade = rhs.getGrade();
    return (*this);
}

// Calling Operator
std::ostream &operator<<(std::ostream &o, Bureaucrat const &i)
{
    o << BOLD BLUE << i.getName() << RESET << ", bureaucrat grade " 
      << BOLD PINK << i.getGrade() << RESET << std::endl;
    return o;
}

/* **************************** Getters ******************************* */

std::string const Bureaucrat::getName(void) const
{
    return (_Name);
}

unsigned int Bureaucrat::getGrade(void) const
{
    return (_Grade);
}

/* *************************** Functions ****************************** */

void Bureaucrat::incrementGrade(void)
{
    if (_Grade > 1)
        _Grade -= 1;
    else
        throw grade_too_high_exception;
}

void Bureaucrat::decrementGrade(void)
{
    if (_Grade < 150)
        _Grade += 1;
    else
        throw grade_too_low_exception;
}

/* ******************************************************************** */