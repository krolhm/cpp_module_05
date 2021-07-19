/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 18:34:56 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/19 10:08:26 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/* **************************** Coplien ******************************* */

// Default Constructor
PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
	Form("presidential pardon", 25, 5), _Target(target)
{
	
}

// Copy Constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : 
	Form("presidential pardon", 25, 5)
{
	*this = src;
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm()
{
}

// Assignment Operator
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	(void)rhs;
	return (*this);
}

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &i)
{
	return (i.output(o));
}

/* ***************************** Methods ****************************** */

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	try
	{
		Form::execute(executor);
		std::cout << BLUE BOLD << executor.getName() << RESET << " executes " << getName() << std::endl;
		std::cout << BLUE BOLD << _Target << RESET << " has been pardoned by Zafod Beeblebrox" << std::endl;
	}
	catch (Form::FormNotSigned &e)
	{
		(void)e;
		std::cout << BLUE BOLD << getName() << RESET RED << " is not signed" << RESET << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		(void)e;
		std::cout << BLUE BOLD << executor.getName() << RESET RED
				  << " 's grade is too low to execute " << getName() << std::endl;
	}
}

/* ******************************************************************** */