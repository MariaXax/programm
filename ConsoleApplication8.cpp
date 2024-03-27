#include <iostream>

using namespace std;

int main()
{
	int n, kk = 0;
	cin >> n;
	cout << "*" << endl;
	for (int i = 1; i < n; i++)
	{
		cout << "*";
		for (int k = 0; k < i; k++)
		{
			cout << " ";
		}
		cout << "*" << endl;
	}
	for (int i = 0; i <= n + 1; i++)
	{
		cout << "*";
	}
}
