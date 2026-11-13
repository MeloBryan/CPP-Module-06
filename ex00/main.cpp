/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 23:38:04 by bmelo             #+#    #+#             */
/*   Updated: 2026/11/13 23:43:25 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalConv.hpp"
#include <iostream>

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cerr << "Usage : ./ex00 <literal>" << std::endl;
        return (1);
    }
    ScalConv::convert(av[1]);
    return (0);
}