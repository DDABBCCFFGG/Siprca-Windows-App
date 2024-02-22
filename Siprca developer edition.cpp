#include <iostream>
using namespace std;
double n,m;
char t;
int main()
{
	cin >> n >> t >> m;
	if(t == '+')
	{
		cout << n + m;
	}
	if(t == '-')
	{
		cout << n - m;
	}
	if(t == '*')
	{
		cout << n * m;
	}
	if(t == '/')
	{
		cout << n + m;
	}
	return 0;
}