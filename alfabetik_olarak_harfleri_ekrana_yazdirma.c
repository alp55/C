#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    int sayi;
	char b='a'; //girilen sayıyı string olarak b ye aktarır
	printf("alfabede kaça kadar yazdırmak istiyorsun\n");

    scanf("%d",&sayi); // sayi girişi yapılır

   	for (int i = 1; i <= sayi; ++i)   // döngü girilen sayı kadar tekrar eder 
   	{
   		printf("%c \n",b);
   		b=b+2;  // a harfinden başlayarak 2 şer aralıklarla yazar a c örn

   	}

   	getch();
	return 0;
}