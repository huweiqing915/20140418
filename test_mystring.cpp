/*************************************************************************
	> File Name: test_mystring.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年04月18日 星期五 15时25分07秒
 ************************************************************************/

#include "mystring.h"
using namespace mystring;

int main()
{
	string s = "hello";
	s.debug;

	string s2(s);
	s2.debug;
	return 0;
}
