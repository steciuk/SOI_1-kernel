#include <lib.h>
#include <stdio.h>
#include </usr/include/minix/type.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int result;
	int i;
	message msg;
	
	if(argc == 1) printf("No argument!\n");
	else
	{
		msg.m1_i1 = 0;
		result = _syscall(0,GETOWN,&msg);
		printf("Process pid = %d\n", result);
		msg.m1_i1 = atoi(argv[1]);
		result = _syscall(0,GETOWN,&msg);
		printf("Process pid + given value = %d\n", result); 
	}
	return 0;
}
