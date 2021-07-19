/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 16:54:01 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/19 08:46:30 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/* **************************** Coplien ******************************* */

// Default Constructor
RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
	Form("RobotomyRequestForm", 72, 45), _Target(target)
{
	
}

// Copy Constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : 
	Form("RobotomyRequestForm", 72, 45)
{
	*this = src;
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
}

// Assignment Operator
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	(void)rhs;
	return (*this);
}

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &i)
{
	return (i.output(o));
}

/* ***************************** Methods ****************************** */

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	try
	{
		srand(time(NULL));
		Form::execute(executor);
		std::cout << BLUE BOLD << executor.getName() << RESET << " executes " << BLUE BOLD << getName() << RESET << std::endl;
		if (rand() % 2)
			std::cout << BLUE BOLD << _Target << RESET GREEN << " has been robotomized successfully BZzzzzzzZZZzzz" << RESET << std::endl;
		else
			std::cout << BLUE BOLD << _Target << RESET RED << "'s robotomization is a failure !" << RESET << std::endl;
	}
	catch (Form::FormNotSigned &e)
	{
		(void)e;
		std::cout << BLUE BOLD << getName() << RESET RED << " is not signed" << RESET<< std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		(void)e;
		std::cout << BLUE BOLD << executor.getName() << RESET RED
				  << " 's grade is too low to execute " << getName() << std::endl;
	}
}

/* ******************************************************************** */