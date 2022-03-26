#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
	int n,t=0;
	printf("bir n sayisi giriniz\n"); //bir sayı girilmesi istenir 
	scanf("%d",&n);
	for (int i = 1; i <= n; ++i)
	{
		t=t+i;   //girilen sayı kadar 1 den her defasına üstüne ekleyerek toplar  
	}
	printf("sonuç \n %d",t);
	getch();
	return 0;
}