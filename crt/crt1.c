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

}
