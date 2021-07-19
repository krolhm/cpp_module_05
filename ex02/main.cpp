/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:31:49 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/18 19:47:22 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat newbie("Newbie", 150);
	Bureaucrat president("President", 1);

	ShrubberyCreationForm tree("Tree_B620");
	RobotomyRequestForm robotomiz("Roboto_423X");
	PresidentialPardonForm presidential("President_F220");

	std::cout << newbie << president << std::endl;

	std::cout << tree << robotomiz << presidential << std::endl;

	newbie.signForm(tree);
	president.signForm(tree);
	newbie.executeForm(tree);
	president.executeForm(tree);

	newbie.signForm(robotomiz);
	president.signForm(robotomiz);
	newbie.executeForm(robotomiz);
	president.executeForm(robotomiz);

	newbie.signForm(presidential);
	president.signForm(presidential);
	newbie.executeForm(presidential);
	president.executeForm(presidential);

	std::cout << std::endl << tree << robotomiz << presidential << std::endl;

	return (0);    
}