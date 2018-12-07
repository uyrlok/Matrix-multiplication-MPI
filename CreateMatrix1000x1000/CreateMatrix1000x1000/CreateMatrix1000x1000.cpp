// CreateMatrix1000x1000.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

#define N 1000

#include <iostream>
#include <fstream>
//#include <Windows.h>

using namespace std;


int main()
{
	
	string pathtofile1 = "matrix1.txt";
	string pathtofile2 = "matrix2.txt";

	ofstream fout;
	fout.open(pathtofile1);
	if (fout.is_open())
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				fout << rand() % 9 +1;
			}
			fout << endl;
		}
		fout.close();
	}
	else
	{
		cout << "Файл 1 не создан.";
		//system("pause");
	}



	fout.open(pathtofile2);
	if (fout.is_open())
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				fout << rand() % 9 + 1;
			}
			fout << endl;
		}

		fout.close();
	}
	else
	{
		cout << "Файл 2 не создан.";
		//system("pause");
	}



	return 0;
}




