#include "../include/Scalar.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter& other) { (void)other; }
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) { (void)other; return *this; }
ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(const std::string& literal)
{
    char* end;
    double value = std::strtod(literal.c_str(), &end); // string to double

    if (*end != '\0' && !(literal.size() > 1 && *end == 'f' && *(end + 1) == '\0'))
    {
        if (literal.size() == 1 && std::isprint(literal[0]))
            value = static_cast<double>(literal[0]);
        else
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: impossible" << std::endl;
            std::cout << "double: impossible" << std::endl;
            return;
        }
    }
    convertToChar(value);
    convertToInt(value);
    convertToFloat(value);
    convertToDouble(value);
}

void ScalarConverter::convertToChar(double value)
{
    if (std::isnan(value) || std::isinf(value) || value < 0 || value > 127)
        std::cout << "char: impossible" << std::endl;
    else if (value < 32 || value == 127)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
}

void ScalarConverter::convertToInt(double value)
{
    if (std::isnan(value) || std::isinf(value)
        || value < static_cast<double>(INT_MIN) || value > static_cast<double>(INT_MAX))
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(value) << std::endl;
}

void ScalarConverter::convertToFloat(double value)
{
    if (std::isnan(value))
        std::cout << "float: nanf" << std::endl;
    else if (std::isinf(value))
        std::cout << "float: " << (value > 0 ? "+" : "-") << "inff" << std::endl;
    else if (value < -FLT_MAX || value > FLT_MAX)
        std::cout << "float: impossible" << std::endl;
    else
    {
        float f = static_cast<float>(value);
        std::cout << "float: " << f;
        if (f == static_cast<int>(f) && !std::isinf(f))
            std::cout << ".0";
        std::cout << "f" << std::endl;
    }
}

void ScalarConverter::convertToDouble(double value)
{
    if (std::isnan(value))
        std::cout << "double: nan" << std::endl;
    else if (std::isinf(value))
        std::cout << "double: " << (value > 0 ? "+" : "-") << "inf" << std::endl;
    else
    {
        std::cout << "double: " << value;
        if (value == static_cast<int>(value) && !std::isinf(value))
            std::cout << ".0";
        std::cout << std::endl;
    }
}

