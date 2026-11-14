/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 07:14:58 by bmelo             #+#    #+#             */
/*   Updated: 2026/11/14 07:22:13 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

int main()
{
    std::srand(static_cast<unsigned int>(std::time(NULL)));
    for (int i=0;i<5;i++)
    {
        Base *obj = generate();
        std::cout << "Identify pointeur : ";
        identify(obj);
        std::cout << "Identify refenrence : ";
        identify(*obj);
        delete obj;
    }
    return (0);
}