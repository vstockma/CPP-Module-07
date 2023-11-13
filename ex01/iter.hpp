/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:53:13 by vstockma          #+#    #+#             */
/*   Updated: 2023/11/13 11:05:24 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void printElement(const T& element)
{
    std::cout << element << " ";
}

template <typename T, typename Func>
void iter(T* array, size_t size, Func func)
{
    size_t i = 0;
    while (i < size)
    {
        func(array[i]);
        i++;
    }
}

#endif