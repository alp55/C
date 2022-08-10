#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
	int a;
	int *a_ptr;
	a=7;
	a_ptr=&a;
	printf("a degisken adresi; %p\n""a_ptr adresi; %p\n\n",&a,&a_ptr);
	printf("a degiskenini degeri: %d \n ",a,a_ptr,*a_ptr);
	getch();
	return 0;
}