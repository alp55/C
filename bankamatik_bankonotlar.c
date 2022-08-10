#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void bankamatik (int para)
{
int a,yirmilik,onluk,beslik;
a=para;
if(a%5==0)
{
yirmilik=a/20;
a-=yirmilik*20;
onluk=a/10;
a-=onluk*10;
beslik=a/5;
a-=a*5;
printf("\n yirmilik%d ",yirmilik);
printf("\n onluk %d",onluk);
printf("\n beslik%d",beslik);


}
else
{
	printf("Girilen sayı 5 in kati degil");
}
 int main(int argc, char const *argv[])
{
	int para;
	printf("cekmek istediginiz tutari giriniz");
	scanf("%d",&para);
	bankamatik(para);
	
	getch();
}



}