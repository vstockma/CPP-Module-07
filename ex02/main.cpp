/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:27:59 by vstockma          #+#    #+#             */
/*   Updated: 2023/11/13 16:27:06 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{   
    try
    {
        Array<int>defaultArr;
        Array<int>intArr(7);
        
        std::cout << defaultArr.size() << std::endl;
        defaultArr = intArr;
        
        std::cout << defaultArr.size() << std::endl;
        std::cout << intArr.size() << std::endl;

        Array<std::string>stringArr(10);
        Array<std::string>stringArr2(stringArr);
        std::cout << stringArr.size() << std::endl;
        std::cout << stringArr2.size() << std::endl;

        stringArr2[0] = "Hello";
        stringArr2[4] = "dear";
        stringArr2[8] = "evaluator";
        unsigned int i = 0;
        while (i < stringArr2.size())
        {
            std::cout << stringArr2[i] << std::endl;
            i++;
        }
        std::cout << stringArr2[100] << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception: index out of range" << std::endl;
    }
    
    return 0;
}