/*************************************************************************
	> File Name: mystring.h
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年04月18日 星期五 15时10分36秒
 ************************************************************************/

#ifndef MY_STRING_H_
#define MY_STRING_H_

#include <iostream>
#include <string.h>

namespace mystring {

class string {
	public:
		string();
		string(const char *);
		string(const string&);
		void debug();
		std::size_t size() const;
		~string();
		string& operator=(const string&);
	private:
		char *_str;
};

}

#endif

