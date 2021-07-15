/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:32:41 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/15 21:50:31 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* **************************** Coplien ******************************* */

// Default Constructor
Form::Form(const std::string &name, unsigned int grade_required_to_sign
		, unsigned int grade_required_to_execute) : _Name(name),
		_Grade_Required_To_Sign(grade_required_to_sign),
		_Grade_Required_To_Execute(grade_required_to_execute)
{
	if (grade_required_to_sign < 1 || grade_required_to_execute < 1)
		throw grade_too_high_exception;
	if (grade_required_to_sign > 150 || grade_required_to_execute > 150)
		throw grade_too_low_exception;
}

// Copy Constructor
Form::Form(const Form &src) : _Name(src.getName()),
	_Grade_Required_To_Sign(src.getGrade_Required_To_Sign()),
	_Grade_Required_To_Execute(src.getGrade_Required_To_Execute())
{
	*this = src;
}

// Destructor
Form::~Form()
{
	
}

// Assignment Operator
Form &Form::operator=(const Form &rhs)
{
	if (this != &rhs)
		_Signed = rhs.getSigned();
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Form const &i)
{
	o << "Form: " << BLUE BOLD << i.getName() << RESET << ", Signing Grade required [" 
	<< i.getGrade_Required_To_Sign() << "] , Execution Grade required [" 
	<< i.getGrade_Required_To_Execute() << RESET;
	if (i.getSigned() == true)
		o << "]," << GREEN BOLD << " has been signed" << RESET << std::endl;
	else
		o << "]," << RED BOLD << " has not been signed" << RESET << std::endl;
	return o;
}

/* **************************** Getters ******************************* */

std::string Form::getName() const
{
	return (_Name);
}

unsigned int Form::getGrade_Required_To_Sign() const
{
	return (_Grade_Required_To_Sign);
}

unsigned int Form::getGrade_Required_To_Execute() const
{
	return (_Grade_Required_To_Execute);
}

bool Form::getSigned() const
{
	return (_Signed);
}

/* *************************** Functions ****************************** */

void Form::beSigned(Bureaucrat &bureaucrat) 
{
	if (bureaucrat.getGrade() <= _Grade_Required_To_Sign)
		_Signed = true;
	else
		throw grade_too_low_exception;	
}

/* ******************************************************************** */