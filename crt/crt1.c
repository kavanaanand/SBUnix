#include <stdlib.h>
#include <stdio.h>

void _start(int stacktop) 
{

	int argc = 1;//local variable

	char p[0];//Access to stack top
	void *q=NULL;
	void *r=NULL;
	
	q=p+8;
	r=(*p+2)*8 + p;	
	
	argc = main(*(p), q , r);
	exit(argc);

<<<<<<< HEAD
=======
int main(int argc, char* argv[], char* envp[]);

void _start(void) {
	int argc = 1;
	char* argv[0];
	char* envp[0];
	int res;
	res = main(argc, argv, envp);
	exit(res);
>>>>>>> 2c4f846c4dbb274d424459f7a54164c7fa3ddd87
}
