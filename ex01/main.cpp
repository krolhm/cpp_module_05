/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:31:49 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/15 21:22:14 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat newbie("Newbie", 150);
    Bureaucrat president("President", 1);

    Form request("Request_B620", 150, 100);
    Form certificate("Certificate_XB12", 1, 1);
    
    std::cout << newbie << president << std::endl;

    std::cout << request << certificate << std::endl;

    newbie.signForm(request);
    newbie.signForm(certificate);

    president.signForm(request);
    president.signForm(certificate);

    std::cout << request << certificate << std::endl;

    return (0);    
}