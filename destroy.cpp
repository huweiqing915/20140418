/*************************************************************************
	> File Name: destroy.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年04月18日 星期五 22时23分30秒
 ************************************************************************/

#include <iostream>
using namespace std;

class Test {
public:
	Test()
	{
		cout << "construct" << endl;
	}
	~Test() 
	{
		cout << "destroy" << endl;
	}
};

int main()
{
	{
		Test t;
	//	Test *p = new Test[5];
		Test &t2 = t;
	//	delete[] p;
	}

	cout << "test" << endl;
}

