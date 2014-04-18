/*************************************************************************
	> File Name: 13_4.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年04月18日 星期五 21时22分59秒
 ************************************************************************/

#include <iostream>
using namespace std;

sturct NoName {
	NoName():pstring(new std::string), i(0), d(0){ }
	NoName(const NoName & orig)
	{
		i = orig.i;
		d = orig.d;
		pstring = new string;
		*pstring = *(orig.pstring);
	}
private:
	string *pstring;
	int i;
	double d;
};
