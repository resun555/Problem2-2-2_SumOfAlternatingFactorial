// stdafx.cpp : source file that includes just the standard includes
// Problem2-2-2_SumOfAlternatingFactorial.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file

unsigned int FindFactorial(unsigned int n)
{
	unsigned int factorial = 1;
	for (size_t i = 0; i < n; i++)
	{
		factorial *= i + 1;
	}
	return factorial;
}

