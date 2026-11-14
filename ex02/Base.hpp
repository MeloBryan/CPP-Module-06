/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 06:54:16 by bmelo             #+#    #+#             */
/*   Updated: 2026/11/14 07:20:56 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <string>

class Base
{
    public :
        virtual ~Base();
    private :
        Base();
        Base *generate(void);
        void identify(Base *p);
        void identify(Base &p);
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif