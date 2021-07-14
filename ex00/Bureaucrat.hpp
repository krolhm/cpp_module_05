/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:31:53 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/14 14:28:40 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include <cstring>

class Bureaucrat
{
	public:
		/* **************************** Coplien ******************************* */
		Bureaucrat(const std::string &name, int grade); // Default Constructor
		Bureaucrat(const Bureaucrat &src);				// Copy Constructor
		~Bureaucrat();									// Destructor
		Bureaucrat &operator=(const Bureaucrat &rhs);	// Assignment Operator
		/* *************************** Exceptions ***************************** */
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
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
		/* **************************** Getters ******************************* */
		std::string const getName(void) const;
		unsigned int getGrade(void) const;
		/* *************************** Functions ****************************** */
		void incrementGrade(void);
		void decrementGrade(void);
		/* ******************************************************************** */

	private:
		std::string _Name;
		unsigned int _Grade;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i);

/* **************************** Color ******************************* */
#define RESET "\033[0m"
#define BOLD "\033[1m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define PINK "\033[35m"
/* ******************************************************************** */

#endif