#include "stdio.h"

extern void test_func_x(int i);

void test_func(int i)
{
	printf("in livepatch test_func:%d\r\n",i);
	test_func_x(-i);
	return;
}


