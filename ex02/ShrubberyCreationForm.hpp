/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 21:53:52 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/16 16:51:56 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <stdexcept>
#include <cstring>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    public:
        /* **************************** Coplien ******************************* */
        ShrubberyCreationForm(std::string target);	                        // Default Constructor
		ShrubberyCreationForm(const ShrubberyCreationForm &src);	        // Copy Constructor
		~ShrubberyCreationForm();					                        // Destructor
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs); // Assignment Operator
        /* ***************************** Methods ****************************** */
        void execute(Bureaucrat const &executor) const;
        /* ******************************************************************** */

    private:
        std::string const _Target;
};

/* *************************** Overload ***************************** */
std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &i);
/* **************************** Color ******************************* */
#define RESET "\033[0m"
#define BOLD "\033[1m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define PINK "\033[35m"
/* ******************************************************************** */

#endif