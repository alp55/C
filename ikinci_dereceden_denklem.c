#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
	float a,b,c,dk;
	printf("ax+b=c denklermi icin a,b ve c degerlerini sirasiyla giriniz\n");
	scanf("%f %f %f",&a,&b,&c);
dk=(c-b)/a;
printf("denklemin degeri \n %0.02f",dk);
	

getch();
	return 0;
}