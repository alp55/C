#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
	int a,t=0; 
	printf("bir n sayisi giriniz \n");
	scanf("%d",&a);
for (int i = 0; i <= a; ++i)
{
	
t=t+i;
	
	
}
printf("n e kadar toplam \n %d ",t);
getch();

	return 0;
}