#include <iostream>

using namespace std;

int Pascal(int y,int x)
{
	if (x == 1 || x == y)
		return 1;
	

	return Pascal(y-1,x-1)+Pascal(y-1,x);
}

int main()
{
	char enter = 'Y';
	int dep, lon;
	while (enter=='Y')
	{
		cout << "��J���h\n";
		cin >> dep;
		cout << "��J�ĴX��\n";
		cin >> lon;
		printf("\n�ڴ��d�T���β�%d����%d�ӭȬ�%d",dep,lon,Pascal(dep,lon));

		cout << "\n�O�_�~��? Y(�O)/N(�_)\n";
		cin >> enter;
	}
}