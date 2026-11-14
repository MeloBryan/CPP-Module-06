/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 07:00:02 by bmelo             #+#    #+#             */
/*   Updated: 2026/11/14 07:22:38 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>
#include <iostream>

Base::Base(){}

Base* Base::generate(void)
{
    int n = std::rand() % 3;
    if (n == 0)
        return (new A());
    else if (n == 1)
        return (new B());
    else
        return (new C());
}

void Base::identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "The type is A" << std::endl;
    else if (dynamic_cast<B*>(p));
        std::cout << "The type is B" << std::endl;
    else if (dynamic_cast<C*>(p));
        std::cout << "The type is C" << std::endl;
    else
        std::cout << "The type is unknown ..." << std::endl;
}

void Base::identify(Base &p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "The type is A" << std::endl;
        return;
    }
    catch (...)
    {}
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "The type is B" << std::endl;
        return;
    }
    catch (...)
    {}
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "The type is C" << std::endl;
        return;
    }
    catch (...)
    {}
}