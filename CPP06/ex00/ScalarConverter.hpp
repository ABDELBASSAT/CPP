


#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP


#include <iostream>


class ScalarConverter
{
public: 
	ScalarConverter();
	ScalarConverter(const ScalarConverter &obj);
  	ScalarConverter & operator=(const ScalarConverter &obj);
  	~ScalarConverter();
	static void convert(std::string str);
private:

};

void Parse(std::string str , double &value);
int forinff(std::string str );

#endif
