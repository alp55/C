#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
	int n;
	printf("dizi kac elaman olsun\n");
	scanf("%d",&n);
	int dizi[n];
for (int i = 0; i < n; ++i)
{
	
printf("\n%d.elamanini giriniz :",i+1);
scanf("%d",&dizi[i]);


switch(dizi[i])
{
case 1:printf("bir");break;
case 2: printf("iki");break;
case 3: printf("uc");break;
case 4:printf("dort");break;
case 5:printf("bes");break;
case 6:printf("alti");break;
case 7:printf("yedi");break;
case 8:printf("sekiz");break;
case 9:printf("dokuz");break;
case 0:printf("sifir");break;
}

}
getch();
	return 0;
} //Alperen Ulutaş 21630480