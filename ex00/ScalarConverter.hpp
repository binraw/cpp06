#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <iomanip> 


class ScalarConverter
{
private:
    ScalarConverter();
    ~ScalarConverter(); 
    ScalarConverter(const ScalarConverter &other);
    ScalarConverter &operator=(const ScalarConverter &other);

public:
   static void convert(std::string value);
};
void convertInt(std::string value);
void convertChar(std::string value);
void convertDouble(std::string value);
void convertNan();


#endif