#pragma once
#include <iostream>
#include <immintrin.h>

class Martix
{
private:
	__m256d m1;
	__m256d m2;
	__m256d m3;
	__m256d m4;

public:
	Martix() 
	{
		m1 = m2 = m3 = m4 = _mm256_set1_pd(0);
	}

	__m256d operator* (const __m256d& value)
	{
		m1;
	}
};

