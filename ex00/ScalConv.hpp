/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalConv.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 22:26:26 by bmelo             #+#    #+#             */
/*   Updated: 2026/11/13 22:33:28 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALCONV_HPP
#define SCALCONV_HPP

#include <string>

class ScalConv
{
    public :
        ScalConv();
        ScalConv(const ScalConv &other);
        ScalConv&operator=(const ScalConv &copy);
        ~ScalConv();

        static void convert(const std::string &literal);
};

#endif