/*************************************************************************
	> File Name: assign.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年04月18日 星期五 14时47分17秒
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	Student():_id(0), _name(" "), _score(0) { }
	Student(int id, const string &name, int score):
		_id(id), _name(name), _score(score) { }

	void debug()
	{
		cout << _id << " " << _name << " " << _score << endl;
	}

	Student &operator<(const Student &rhs)
	{
		_id = rhs._id;
		_name = rhs._name;
		_score = rhs._score;
		return *this;
	}

private:
	int _id;
	string _name;
	int _score;
};


int main()
{
	Student s1(23, "test", 77);
	Student s2;
	s1.debug();
	s2.debug();
	s2 < s1;
	s2.debug();
	return 0;
}
