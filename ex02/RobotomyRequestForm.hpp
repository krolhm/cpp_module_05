/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 16:54:05 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/18 16:55:45 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <stdexcept>
#include <cstring>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		/* **************************** Coplien ******************************* */
		RobotomyRequestForm(std::string target);	                    // Default Constructor
		RobotomyRequestForm(const RobotomyRequestForm &src);	        // Copy Constructor
		~RobotomyRequestForm();					                        // Destructor
		RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs); // Assignment Operator
		/* ***************************** Methods ****************************** */
		void execute(Bureaucrat const &executor) const;
		/* ******************************************************************** */

	private:
		std::string const _Target;
};

/* *************************** Overload ***************************** */
std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &i);
/* **************************** Color ******************************* */
#define RESET "\033[0m"
#define BOLD "\033[1m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define PINK "\033[35m"
/* ******************************************************************** */

#endif