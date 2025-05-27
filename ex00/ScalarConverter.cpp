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




 void convertInt(std::string value)
 {
    int result_int;
    float result_float;
    double result_double;
    char result_char;
    std::istringstream iss(value);
    iss >> result_int;


    if (iss.fail())
    {
        convertNan();
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
    result_float = static_cast<float>(result_int);
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float : " << result_float << "f" << std::endl;
    result_double = static_cast<double>(result_int);
    std::cout << "double : " << result_double <<  std::endl;
}
 

bool isChar(const std::string& input)
{
    return input.length() == 1 && std::isalpha(input[0]);
}

void convertChar(std::string value)
{
    int result_int;
    float result_float;
    double result_double;
    char result_char;
    std::istringstream iss(value);
    iss >> result_char;
    if (iss.fail())
    {
        convertNan();
        return ;
    }
    std::cout << "char : " << result_char << std::endl;
    result_int = static_cast<int>(result_char);
    std::cout << "int : " << result_int << std::endl;
    result_float = static_cast<float>(result_char);
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float : " << result_float << "f" << std::endl;
    result_double = static_cast<double>(result_char);
    std::cout << "double : " << result_double <<  std::endl;
}



void convertDouble(std::string value)
{
    double result_double;
    char    result_char;
    int     result_int;
    float   result_float;
    std::istringstream iss(value);
    iss >> result_double;
    if (iss.fail())
    {
        convertNan();
        return ;
    }
    if (result_double >= 33 && result_double <= 126)
    {
        result_char = static_cast<char>(result_double);
        std::cout << "char : " << result_char << std::endl;
    }
    else
        std::cout << "char : Non displayable" << std::endl;
    if (result_double > 2147483647 || result_double < -2147483648)
    {
        std::cout << "int : impossible"  << std::endl;
    }
    else 
    {
        result_int = static_cast<int>(result_double);
        std::cout << "int : " << result_int << std::endl;
    }
    result_float = static_cast<float>(result_double);
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float : " << result_float << "f" << std::endl;
    result_double = static_cast<double>(result_double);
    std::cout << "double : " << result_double <<  std::endl;
}

void ScalarConverter::convert(std::string value)
{
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
        int number_of_points = 0;
        int number_of_f = 0;
        int number_of_sign = 0;
        for (std::string::iterator it = value.begin(); it != value.end(); it++)
        {
            if (*it == '.')
                number_of_points++;
            else if (*it == 'f')
                number_of_f++;
            else if (*it == '+' || *it == '-')
                number_of_sign++;
        }
        if (isChar(value))
            convertChar(value);
        else if (number_of_points == 1 && number_of_f <= 1)
            convertDouble(value);
        else if (number_of_sign > 1 || number_of_points > 1 || number_of_f > 1)
            convertNan();
        else
            convertInt(value);
    }
}

void convertNan()
{
    std::cout << "char : impossible" << std::endl;
    std::cout << "int : impossible" << std::endl;
    std::cout << "float : nanf" << std::endl;
    std::cout << "double : nan" << std::endl;
}