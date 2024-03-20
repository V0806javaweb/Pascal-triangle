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
		cout << "輸入階層\n";
		cin >> dep;
		cout << "輸入第幾個\n";
		cin >> lon;
		printf("\n巴斯卡三角形第%d階第%d個值為%d",dep,lon,Pascal(dep,lon));

		cout << "\n是否繼續? Y(是)/N(否)\n";
		cin >> enter;
	}
}