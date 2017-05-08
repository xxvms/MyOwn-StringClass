#include "string_.h"
#include <iostream>


string_::string_() //constructor NO arguments
{
	str[0] = '\0';
}
string_::string_(char s_[])
{
	strcpy(str, s_);
}
void string_::display()
{
	std::cout << str;// << std::endl;
}
void string_::concat(string_ s2)
{
	if (strlen(str) + strlen(s2.str) < STRINGSIZE) strcat(str, s2.str);
	else
		std::cout << "String too long..." << std::endl;
}