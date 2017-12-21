#include <stdio.h>
char chrary[]="ZZZZ ZZZZ ";

void main(void){
	char chrvar = 'M';
	int intvar = 0x41424344;
	int* intptr = (int*) chrary;
	printf("YY.	charary=%p\n",	chrary);
	printf("ZZ.	intprt=%p\n",	intptr);
	printf("01.	chrvar=%c\n",	chrvar);
	printf("02.	*chrary=%c\n",	*chrary);
	printf("03.	str chrary=%s\n",	chrary);
	*intptr = intvar;
	printf("04. str chrary=%s\n", chrary);
}
