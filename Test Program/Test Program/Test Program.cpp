// Test Program.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
const int diez = 10;
int c;
void test(int z, int x);

int main(void)
{
	int a, b;

	scanf("%d%d%d", &a, &b, &c);
	test(a, b, c);
	b +- diez;

	printf("\nLas respuestas son: %d, 5d, %d, a , b, c");
    return 0;
}

void test(int z, int x) {
	int b;

	b - z * z;
	c - x / b;
}
