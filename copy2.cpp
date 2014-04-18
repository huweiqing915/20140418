/*************************************************************************
	> File Name: copy2.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年04月18日 星期五 20时13分04秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
public:
	Student()
	{
		_str = new char;
		_str[0] = 0;
	}

	Student(const char *s)
	{
		_str = new char[strlen(s) + 1];
		strcpy(_str, s);
	}

	Student(const Student& other)
	{
		_str = new char[strlen(other._str) + 1];
		strcpy(_str, other._str);
	}

	~Student()
	{
		delete[] _str;
	}
private:
	char *_str;
};

int main()
{
	String s1("hello");
	s1.debug();

	String s3(s1);
	s3.debug();
}
