/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:31:49 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/19 10:34:55 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat newbie("Newbie", 150);
	Bureaucrat president("President", 1);
	Intern intern;

	Form *tree = intern.makeForm("shrubbery creation", "Tree_B620");
	Form *robotomiz = intern.makeForm("robotomy request", "Roboto_423X");
	Form *presidential = intern.makeForm("presidential pardon", "President_F220");

	std::cout << newbie << president << intern << std::endl;

	std::cout << *tree << *robotomiz << *presidential << std::endl;
	
	newbie.signForm(*tree);
	president.signForm(*tree);
	newbie.executeForm(*tree);
	president.executeForm(*tree);

	newbie.signForm(*robotomiz);
	president.signForm(*robotomiz);
	newbie.executeForm(*robotomiz);
	president.executeForm(*robotomiz);

	newbie.signForm(*presidential);
	president.signForm(*presidential);
	newbie.executeForm(*presidential);
	president.executeForm(*presidential);

	std::cout << std::endl << *tree << *robotomiz << *presidential << std::endl;

	return (0);    
}