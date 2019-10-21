#include <iostream>
using namespace std;


/*1+2+3+4+5+6...+n,不能使用if、while、for、switch、case、乘除、条件运算符*/
#if 0
int AddArgs(int n)
{
	int a = 1;
	n > 1 && (a = n + AddArgs(n - 1));
	return a;
}
int main()
{
	int tmp = AddArgs(10);
	cout << tmp << endl;

	return 0;
}
#endif

#if 1
class Add
{
public:
	Add()
	{
		s_m_a++;
		s_m_tmp += s_m_a;
	}
	static int s_m_a;
	static int s_m_tmp;
};


 int Add:: s_m_a;
 int Add::s_m_tmp;
int main()
{
	Add * a = new Add[10];
	cout << Add::s_m_tmp << endl;
	delete[] a;
	return 0;
}
#endif