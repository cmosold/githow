#include "stdio.h"

void test_func_x(int j)
{
	printf("in main process test_func_x:%d\r\n", j);
	return;
}

void test_func(int i)
{
	printf("in main process test_func:%d\r\n", i);
	test_func_x(i);
	return;
}



int main(int argc, char * argv[])
{
	int i =0;
	while (1)
	{
		test_func(i);
		sleep(1);
		i ++;
	}

	return 0;
}


