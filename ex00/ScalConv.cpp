/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalConv.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 22:30:40 by bmelo             #+#    #+#             */
/*   Updated: 2026/11/13 23:04:21 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalConv.hpp"
#include <iostream>

ScalConv::ScalConv()
{
}

ScalConv::~ScalConv()
{
}

void ScalConv::converter(const std::string &literal)
{
    if (literal.find("nan") != std::string::npos)
    {
        std::cout << "char : impossible\n";
        std::cout << "int : impossible\n";
        std::cout << "float : nanf\n";
        std::cout << "double : nan\n";
        return;
    }
    if (literal.find("inf") != std::string::npos)
    {
        std::string sign(0) = (literal[0] == '-') ? "-" : "+";
        std::cout << "char : impossible\n";
        std::cout << "int : impossible\n";
        std::cout << "float : " << sign << "inff\n";
        std::cout << "double : " << sign << "inf\n";
        return;
    }
    try
    {
        double value = 0.0;
        
        if (literal.length() == 1 && !std::isdigit(literal[0]))
            value = static_cast<double>(literal[0]);
        else
        {
            std::string cleanLiteral = literal;
            if (literal[literal.length() - 1] == 'f' && literal != "f" && literal != "-f" && literal != "+f")
                cleanLiteral = literal.substr(0, literal.length() - 1);
            std::stringstream ss(cleanLiteral);
            ss.exceptions(std::ios::failbit | std::ios::badbit);
            ss >> value;

            char leftover;
            if (ss >> leftover)
                throw std::runtime_error("Invalid format");
        }
        std::cout << "char : ";
        if (value < 0 || value > 127 || value != value)
            std::cout << "impossible\n";
        else if (!std::isprint(static_cast<int>(value)))
            std::cout << "Non displayable\n";
        else
            std::cout << "'" << static_cast<char>(value) << "'\n";
        std::cout << "int : ";
        if (value < INT_MIN || value > INT_MAX || value != value)
            std::cout << "impossible\n";
        else
            std::cout << static_cast<int>(value) << "\n";
        std::cout << "float : " << static_cast<float>(value);
        if (value == static_cast<float>(value) && value < 1000000 && value > -1000000)
            std::cout << ".0";
        std::cout << "f\n";
        std::cout << "double : " << value;
        if (value == static_cast<double>(value) && value < 1000000 && value > -1000000)
            std::cout << ".0";
        std::cout << "\n";
    }
    catch (const std::exception &e)
    {
        std::cout << "char : impossible\n";
        std::cout << "int : impossible\n";
        std::cout << "float : impossible\n";
        std::cout << "double : impossible\n";
    }
}