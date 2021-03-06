// Problem2-2-2_SumOfAlternatingFactorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#pragma warning (disable : 4996)


int main()
{
	unsigned int n;
	scanf("%u", &n);
	if (n % 2 == 0)
	{
		printf("error");
		exit(EOF);
	}
	double sum = 0.;
	for (size_t i = 0; i < n; i++)
	{
		switch (i % 2)
		{
		case 0:
			sum += 1. / FindFactorial(i + 1);
			break;
		case 1:
			sum += -1. / FindFactorial(i + 1);
			break;
		default:
			break;
		}
	}
	printf("%lf", sum);
    return 0;
}

