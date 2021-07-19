/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 09:01:58 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/19 09:28:20 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <stdexcept>
#include <cstring>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		/* **************************** Coplien ******************************* */
		Intern();								// Default Constructor
		Intern(const Intern &src);				// Copy Constructor
		~Intern();								// Destructor
		Intern &operator=(const Intern &rhs);	// Assignment Operator
		/* *************************** Functions ****************************** */
		Form *makeForm(std::string name, std::string target);
		/* ******************************************************************** */
};

/* *************************** Overload ***************************** */
std::ostream &operator<<(std::ostream &o, Intern const &i);
/* **************************** Color ******************************* */
#define RESET "\033[0m"
#define BOLD "\033[1m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define PINK "\033[35m"
/* ******************************************************************** */

#endif