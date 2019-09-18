#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include "SCORE.h"
int main()
{
	int N = 0;
	SS *pstu = NULL;
	pstu = readDataFromFile(&N);

	calcuScore(pstu, N);

	sortScore(pstu, N);

	printOut(pstu, N);
	averagenubmer(pstu, N);
	variance(pstu, N);
	Sort(pstu, N);
	free(pstu);
	system("pause");
	return 0;

}

