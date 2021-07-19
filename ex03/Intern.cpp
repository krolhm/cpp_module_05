/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 09:01:56 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/19 10:10:44 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/* **************************** Coplien ******************************* */
// Default Constructor
Intern::Intern()
{

}

// Copy Constructor
Intern::Intern(const Intern &src)
{
	*this = src;
}

// Destructor
Intern::~Intern()
{

}

// Assignment Operator
Intern &Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return (*this);
}

// Calling Operator
std::ostream &operator<<(std::ostream &o, Intern const &i)
{
	(void)i;
	o << "Yes, Sir ?" << std::endl;
	return o;
}

/* *************************** Functions ****************************** */

Form *Intern::makeForm(std::string name, std::string target)
{
	Form *tmp;
	ShrubberyCreationForm *shrub = new ShrubberyCreationForm(target);
	RobotomyRequestForm *robot = new RobotomyRequestForm(target);
	PresidentialPardonForm *presid = new PresidentialPardonForm(target);
	Form *forms[3] = {shrub, robot, presid};
	tmp = shrub;
	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i]->getName())
		{
			tmp = forms[i];
			std::cout << "Intern creates " << BLUE BOLD << forms[i]->getName() << RESET << std::endl;
			i = 3;
		}
	}
	int j = 0;
	for (int i = 0; i < 3; i++)
		if (tmp != forms[i])
			j++;
	if (j == 3)
		std::cout << RED << "Unknown Form." << RESET << std::endl;
	return (tmp);
}

/* ******************************************************************** */