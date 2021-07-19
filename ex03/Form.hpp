/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:32:50 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/19 10:10:36 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <stdexcept>
#include <cstring>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		/* **************************** Coplien ******************************* */
		Form(const std::string &name, unsigned int grade_required_to_sign
		, unsigned int grade_required_to_execute);	// Default Constructor
		Form(const Form &src);						// Copy Constructor
		~Form();									// Destructor
		Form &operator=(const Form &rhs);           // Assignment Operator
		/* *************************** Exceptions ***************************** */
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Grade too high !");
				}
		} grade_too_high_exception;
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Grade too low !");
				}
		} grade_too_low_exception;
		class FormNotSigned : public std::exception
		{
		public:
			const char *what(void) const throw()
			{
				return ("Form not signed !");
			}
		} form_not_signed;
		/* **************************** Getters ******************************* */
		std::string getName() const;
		bool getSigned() const;
		unsigned int getGrade_Required_To_Sign() const;
		unsigned int getGrade_Required_To_Execute() const;
		/* ***************************** Methods ****************************** */
		void beSigned(Bureaucrat &bureaucrat);
		virtual void execute(Bureaucrat const &executor) const = 0;
		std::ostream &output(std::ostream &o) const;
		/* ******************************************************************** */

	private:
		std::string const _Name;
		bool _Signed;
		unsigned int const _Grade_Required_To_Sign;
		unsigned int const _Grade_Required_To_Execute;
};

/* *************************** Overload ***************************** */
std::ostream &operator<<(std::ostream &o, Form const &i);
/* **************************** Color ******************************* */
#define RESET "\033[0m"
#define BOLD "\033[1m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define PINK "\033[35m"
/* ******************************************************************** */

#endif