/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 18:34:59 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/18 19:18:46 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <cstring>
#include <fstream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		/* **************************** Coplien ******************************* */
		PresidentialPardonForm(std::string target);	                    // Default Constructor
		PresidentialPardonForm(const PresidentialPardonForm &src);	        // Copy Constructor
		~PresidentialPardonForm();					                        // Destructor
		PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs); // Assignment Operator
		/* ***************************** Methods ****************************** */
		void execute(Bureaucrat const &executor) const;
		/* ******************************************************************** */

	private:
		std::string const _Target;
};

/* *************************** Overload ***************************** */
std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &i);
/* **************************** Color ******************************* */
#define RESET "\033[0m"
#define BOLD "\033[1m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define PINK "\033[35m"
/* ******************************************************************** */

#endif