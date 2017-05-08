#pragma once
#include <cstring> 
class string_
{
private:
	enum { STRINGSIZE = 80 };
	char str[STRINGSIZE];

public:
	string_();
	string_(char s_[]);
	void display();
	void concat(string_ s2_);
};

