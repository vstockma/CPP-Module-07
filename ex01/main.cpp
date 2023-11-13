/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:27:59 by vstockma          #+#    #+#             */
/*   Updated: 2023/11/13 11:04:47 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{

    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};

    iter(intArray, 5, printElement<int>);
    std::cout << std::endl;
    iter(doubleArray, 5, printElement<double>);
    std::cout << std::endl;
    iter(charArray, 5, printElement<char>);
    std::cout << std::endl;
    
    return 0;
}