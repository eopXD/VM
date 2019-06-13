#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main ()
{
	int pid = fork();
	if ( pid == 0 ) 
		printf("i am child\n");
	else 
		printf("i am mama\n");


	return 0;
}
