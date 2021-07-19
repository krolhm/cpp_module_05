/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 21:53:55 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/19 08:57:24 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/* **************************** Coplien ******************************* */

// Default Constructor
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
    Form("ShrubberyCreationForm", 145, 137), _Target(target)
{

}

// Copy Constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) :
    Form("ShrubberyCreationForm", 145, 137)
{
	*this = src;
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

// Assignment Operator
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    (void)rhs;
	return (*this);
}

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &i)
{
    return (i.output(o));
}

/* ***************************** Methods ****************************** */

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    try
    {
        Form::execute(executor);
        std::string name = _Target.c_str();
        std::ofstream ofile(name.append("_shrubbery"));
        std::cout << BLUE BOLD << executor.getName() << RESET << " executes " << BLUE BOLD << getName() << RESET << std::endl;
        if (ofile.bad())
        {
            std::cout << RED << "Can't open file." << RESET << std::endl;
        }
        else
        {
            for (int i = 0; i < 4; i++)
            {
                ofile << "              v .   ._, |_  .," << std::endl;
                ofile << "           `-._\\/  .  \\ /    |/_" << std::endl;
                ofile << "               \\  _\\, y | \\//" << std::endl;
                ofile << "         _\\_.___\\, \\/ -.\\||" << std::endl;
                ofile << "           `7-,--.`._||  / / ," << std::endl;
                ofile << "           /'     `-. `./ / |/_.'" << std::endl;
                ofile << "                     |    |//" << std::endl;
                ofile << "                     |_    /" << std::endl;
                ofile << "                     |-   |" << std::endl;
                ofile << "                     |   =|" << std::endl;
                ofile << "                     |    |" << std::endl;
                ofile << "--------------------/ ,  . \\--------._" << std::endl;
                ofile << std::endl << std::endl;
            }
            ofile.close();
        }
    }
    catch (Form::FormNotSigned &e)
    {
        (void)e;
        std::cout << BLUE BOLD << getName() << RESET RED << " is not signed" << std::endl;
    }
    catch (Form::GradeTooLowException &e)
    {
        (void)e;
        std::cout << BLUE BOLD << executor.getName() << RESET RED 
        << " 's grade is too low to execute " << getName() << std::endl;
    }
}

/* ******************************************************************** */