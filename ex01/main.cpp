/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 04:57:19 by bmelo             #+#    #+#             */
/*   Updated: 2026/11/14 05:17:31 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>

int main()
{
    Data myData;
    myData.n = 40;
    myData.text = "Bonjour";

    Data *originalPtr = &myData;
    std::cout << "Pointeur d'origine : " << originalPtr << std::endl;
    
    uintptr_t rawData = Serializer::serialize(originalPtr);
    std::cout << "Valeur serialisee (entier) : " << rawData << std::endl;

    Data *deserializedPtr = Serializer::deserialize(rawData);
    std::cout << "Pointeur Deserialise : " << deserializedPtr << std::endl;

    if (deserializedPtr == originalPtr)
    {
        std::cout << "Success : Ptr are identical !" << std::endl;
        std::cout << "n ->" << deserializedPtr->n << ", text = " << deserializedPtr->text << std::endl;
    }
    else
        std::cout << "Error : Ptr are different ..." << std::endl;
    return (0);
}