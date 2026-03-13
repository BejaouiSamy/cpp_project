#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <exception>

template <typename T>
class Array
{
    private:
        T				*_data;
        unsigned int	_size;

    public:
        Array() : _data(NULL), _size(0) {}

        Array(unsigned int n) : _data(new T[n]()), _size(n) {}

        Array(Array const &other) : _data(NULL), _size(0)
        {
            *this = other;
        }

        ~Array()
        {
            delete[] _data;
        }

        Array	&operator=(Array const &other)
        {
            if (this != &other)
            {
                T				*newData = NULL;
                unsigned int	newSize = other._size;

                if (newSize > 0)
                {
                    newData = new T[newSize];
                    unsigned int i = 0;
                    while (i < newSize)
                    {
                        newData[i] = other._data[i];
                        i++;
                    }
                }
                delete[] _data;
                _data = newData;
                _size = newSize;
            }
            return (*this);
        }

        T	&operator[](unsigned int index)
        {
            if (index >= _size)
                throw OutOfBoundsException();
            return (_data[index]);
        }

        T const	&operator[](unsigned int index) const
        {
            if (index >= _size)
                throw OutOfBoundsException();
            return (_data[index]);
        }

        unsigned int	size(void) const
        {
            return (_size);
        }

        class OutOfBoundsException : public std::exception
        {
        public:
            virtual const char *what() const throw()
            {
                return ("Array index out of bounds");
            }
        };
};

#endif