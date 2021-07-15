/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:31:51 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/15 21:51:32 by rbourgea         ###   ########.fr       */
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

std::string const Bureaucrat::getName() const
{
    return (_Name);
}

unsigned int Bureaucrat::getGrade() const
{
    return (_Grade);
}

/* *************************** Functions ****************************** */

void Bureaucrat::incrementGrade()
{
    if (_Grade > 1)
        _Grade -= 1;
    else
        throw grade_too_high_exception;
}

void Bureaucrat::decrementGrade()
{
    if (_Grade < 150)
        _Grade += 1;
    else
        throw grade_too_low_exception;
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << BLUE BOLD << _Name << RESET
        << " signs " << BLUE BOLD << form.getName() << std::endl;
    }
    catch (Form::GradeTooLowException &e)
    {
        std::cout << BLUE BOLD << _Name << RESET RED << " cannot sign " 
        << " because his grade is too low" << RESET << std::endl;
    }
}

/* ******************************************************************** */