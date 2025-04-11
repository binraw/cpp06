#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    *this = other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &)
{
    return *this;
}

void ScalarConverter::convert(std::string value)
 {
    int result_int;
    float result_float;
    double result_double;
    char result_char;

    if (value == "-inff" || value == "-inf")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : -inff" << std::endl;
        std::cout << "double : -inf" << std::endl;
    }
    else if (value == "+inff" || value == "+inf")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : +inff" << std::endl;
        std::cout << "double : +inf" << std::endl;
    }
    else 
    {
        std::istringstream iss(value);
        iss >> result_int;
        if (iss.fail())
        {
                std::cout << "char : impossible" << std::endl;
                std::cout << "int : impossible" << std::endl;
                std::cout << "float : nanf" << std::endl;
                std::cout << "double : nan" << std::endl;
                return ;
        }
        if (result_int >= 33 && result_int <= 126)
        {
            result_char = static_cast<char>(result_int);
            std::cout << "char : " << result_char << std::endl;
        }
        else
            std::cout << "char : Non displayable" << std::endl;
        std::cout << "int : " << result_int << std::endl;
        iss.clear();
        iss.str(value);
        iss >> result_float;
        result_float = roundf(result_float * (1 << 8));
        result_float = (result_float) / (1 << 8);
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "float : " << result_float << "f" << std::endl;
        iss.clear();
        iss.str(value);
        iss >> result_double;
        std::cout << "double : " << result_double <<  std::endl;
    }
   
 }