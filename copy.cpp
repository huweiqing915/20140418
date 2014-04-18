/*************************************************************************
	> File Name: copy.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年04月18日 星期五 11时18分50秒
 ************************************************************************/

#include <iostream>
using namespace std;

class Array {
	public:
		Array()
		{
			_p = new int;
		}

		Array(const Array &other)
		{
			_p = new int;
		}

		~Array()
		{
			delete _p;
		}

		void debug()
		{
			cout << _p << endl;
		}
	private:
		int *_p;
};


int main()
{
	Array a;
	a.debug();

	Array a2(a);
	a2.debug();
}
