// nauka.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	#define n 2
	#define m 3
	int tab[n][m];
	int max = 0;

	//wprowadzam dane do tabeli
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < m; k++)
		{
			cin >> tab[i][k];
		}
	}
	
	//sprawdza max w kolumnie
	for (int i = 0; i < m; i++)
	{
		for (int k = 0; k < n; k++)
		{
			if (tab[k][i] > max)
				max = tab[k][i];
		}
		
		//zmienia liczby = max na przeciwne
		for (int k = 0; k < n; k++)
		{
			if (tab[k][i] == max)
				tab[k][i] = -tab[k][i]; 
		}
		//zeruje maxa
		max = 0;
	}

	//wypisuje tabele
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < m; k++)
		{
			cout << tab[i][k] << " ";
		}
		cout << endl;
	}

	system("pause");
    return 0;
}

