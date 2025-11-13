#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int i = 4;
	//int i = 300; 300 = 256 + 44 = 2^8 + 44 = 1byte + 44
	int *pi = &i;
	char *pc = &i;
	
	printf("%i, %i, %i\n", i, *pi, *pc);
	 
  system("PAUSE");	
  return 0;
}
