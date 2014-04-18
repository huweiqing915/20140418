/*************************************************************************
	> File Name: mystring.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年04月18日 星期五 15时14分08秒
 ************************************************************************/

#include "mystring.h"

namespace mystring {

string::string() 
{
	_str = new char;
	_str[0] = 0;
}

string::string(const char* s)
{
	_str = new char[strlen(s) + 1];
	strcpy(_str, s);
}

string::string(const string& s)
{
	_str = new char[s.size() + 1];
	strcpy(_str, s._str);
}

std::size_t string::size() const
{
	return strlen(_str);
}

void string::debug()
{
	std::cout << _str << std::endl;
}

string::string()
{
	delete [] _str;
}

string& string::operator=(const string &s)
{
	delete[] _str;
	_str = new char[s.size() + 1];
	strcpy(_str, s._str);
	return *this;
}

}

