#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
	int kucuksayi,buyuksayi;
	printf("kucuk sayiyi giriniz\n");
	scanf("%d",&kucuksayi);
	printf("buyuk sayiyi giriniz\n");
	scanf("%d",&buyuksayi);
	while(kucuksayi<buyuksayi)
	{
if(kucuksayi%2==0)
{

}
else{
	
printf("%d \n",kucuksayi);
}
kucuksayi++;
	}
	getch();
	return 0;
}