#include <iostream>
using namespace std;
//类型萃取：将系统的内置类型与自定义类型区分开
class Truetype
{
public:
	static bool get()
	{
		return true;
	}
};

class Falsetype
{
public:
	static bool get()
	{
		return false;
	}
};

template <class T>
class typeTraits
{
public:
	typedef Falsetype Jtype;
};

template <>
class typeTraits<int>
{
public:
	typedef Truetype Jtype;
};

template <>
class typeTraits<float>
{
public:
	typedef Truetype Jtype;
};

int main()
{
	cout << typeTraits<int>::Jtype::get() << endl;
	cout << typeTraits<double>::Jtype::get() << endl;



	return 0;
}