#include <stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
	int a; 
	int b=0;
	printf("ne islemi yapmak istiyorsunuz ?\n");
	printf("kalan kulanim icin 1 i\n");
	printf("bakiye sorgulmak ici 2 i\n");
	printf("musteri temsilcesine baglanmak icin 3 tuslayiniz\n");
	scanf("%d",&a);
	
while(1)
{
	switch(a)
	{
	
case 1 :
printf("kalan kulanimi icin devam etmek istiyorsaniz 9 u tuslayiniz\n");
printf("ana menuye donmek icin 0 tuslayiniz\n" );
scanf("%d",&b);
{
	if (b==0)
  {
printf("ne islemi yapmak istiyorsunuz ?\n");
	printf("kalan kulanim icin 1 i\n");
	printf("bakiye sorgulmak ici 2 i\n");
	printf("musteri temsilcesine baglanmak icin 3 tuslayiniz\n");
  }
  else if (b==9)
  {
   printf("isleminiz basarili kalan kulanim bilgileri icin lutfen bekleyin\n \n");
   getch();
  }
}
 
break;
case 2 :
printf("bakiye sorgulmak icin devam etmek istiyorsaniz 9 u tuslayiniz\n");
printf("ana menuye donmek icin 0 tuslayiniz\n" );
 scanf("%d",&b);
{
	if (b==0)
  {
printf("ne islemi yapmak istiyorsunuz ?\n");
	printf("kalan kulanim icin 1 i\n");
	printf("bakiye sorgulmak ici 2 i\n");
	printf("musteri temsilcesine baglanmak icin 3 tuslayiniz\n");
  }
  else if (b==9)
  {
   printf("isleminiz basarili bakiyeniz sorgulaniyor lutfen bekleyin\n \n");
   getch();
  }
}
 

break;
case 3 :
printf("musteri temsilcesine baglanmak icin devam etmek istiyorsaniz 9 u tuslayiniz\n");
printf("ana menuye donmek icin 0 tuslayiniz\n" );
scanf("%d",&b);
{
	if (b==0)
  {
printf("ne islemi yapmak istiyorsunuz ?\n");
	printf("kalan kulanim icin 1 i\n");
	printf("bakiye sorgulmak ici 2 i\n");
	printf("musteri temsilcesine baglanmak icin 3 tuslayiniz\n");
  }
  else if (b==9)
  {
   printf("isleminiz basarili müsteri temsilcesine baglanıyorsunuz lutfen bekleyin\n \n");
   getch();
  }
}
 

break;
default: 
printf("yanlis operatör secimi\n");
break;
}

}

	getch();
	return 0;
}