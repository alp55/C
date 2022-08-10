//fonksiyonlar herhangi bir fonsiyondan cagıralabilecegi gibi herhangi bir fonksiyondanda cagırılabilir kendi kendine calışıabilen fonsiyonlara özyenilemeli fonsiyon adı verilir ozyenilmeli bir fonsiyonnu kendi kendinin cagırması dışında bir 
//klavyeden girilen bir tam sayının faktöriyelini alarak ekrana yazdıran fonsiyonu recurise fonsiyonu kulanarak yazınız 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
long int faktoriyel(int x)
{
int sonuc;
if(x<1 || x==1)
{
return(1);
sonuc=faktoriyel(x-1)*x;

return(sonuc);
}

}
int  main(int argc, char const *argv[])
{
	long int faktor;
	int sayi;
	printf("faktoriyeli alınacak sayi giriniz\n");
	scanf("%d",&sayi);
	faktor=faktoriyel(sayi);
	printf("sonuc=%d",faktor);
	getch();
	
}