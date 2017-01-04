// insertionsots.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


//int _tmain(int argc, _TCHAR* argv[])
int main()
{
	int A[6] = {5,2,4,6,1,3};
	int key=0;
	int i=0;
	
	for (int j = 2; j <= 5; j++)
	{
     
		key = A[j];
		i = j - 1;
		while ((i>0) && (A[i] > key))
		A[i + 1] = A[i];
		i = i - 1;
		A[i + 1] = key;

		cout << A[i+1] << endl;

	}
	

	while (1);
	return 0;
}

