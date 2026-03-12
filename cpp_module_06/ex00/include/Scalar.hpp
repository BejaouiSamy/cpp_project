#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <cfloat>
#include <climits>
#include <cstdlib>

class ScalarConverter
{
    public:
        static void convert(const std::string& literal);
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter& operator=(const ScalarConverter& other);
        ~ScalarConverter();

        static void convertToChar(double value);
        static void convertToInt(double value);
        static void convertToFloat(double value);
        static void convertToDouble(double value);
};

#endif