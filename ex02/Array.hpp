/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:06:39 by vstockma          #+#    #+#             */
/*   Updated: 2023/11/13 16:15:09 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
# include <stdexcept>
# include <cstdlib>

template <typename T>
class Array
{
    private:
        T* _array;
        unsigned int _size;
    public:
        Array()
        {
            _array = NULL;
            _size = 0;
            std::cout << "Default constructror called" << std::endl;
        }
        Array(unsigned int n)
        {
            _array = new T[n];
            _size = n;
            unsigned int i = 0;
            while (i < n)
            {
                _array[i] = T();
                i++;
            }
            std::cout << "Constructror called" << std::endl;
        }
        Array(const Array& copy)
        {
            _array = NULL;
            *this = copy;
            std::cout << "Copy constructror called" << std::endl;
        }
        Array& operator=(const Array& copy)
        {    
            _size = copy._size;
            if (_array)
                delete [] _array;
            _array = new T[_size];
            size_t i = 0;
            while (i < _size)
            {
                _array[i] = copy._array[i];
                i++;
            }
            std::cout << "Copy assignment operator called" << std::endl;
            return *this;
        }
        ~Array()
        {
            delete [] _array;
            std::cout << "Destructror called" << std::endl;
        }
        T& operator[] (int index) const
        {
            if (index < 0 || index >= static_cast<int>(_size))
                throw std::exception();
            return _array[index];
        }
        unsigned int size()
        {
            return (_size);
        }

};

#endif