#include<iostream>
#include<conio.h>
#include<string.h>
#include<fstream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	ChayChuongTrinh();
	return 0;
}
void ChayChuongTrinh()
{
	int a[5][5];
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			a[i][j] = rand() % (10 - 1 + 1) - 1;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << a[i][j] << '\t';
		}
		cout << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (a[i][j] % 2 != 0)
			{
				cout << a[i][j];
				cout << endl;
				cout << "hang " << i << "cot" << j;
				return;
			}

		}

	}
}