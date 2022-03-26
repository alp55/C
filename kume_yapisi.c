#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
	int sayilar[5]={1,2,3,4,5};  // sayilar kümesi 5 elamnı oldugu belirtilir ve 5 elaman yazılır
	printf("sayi:%d\n",sayilar[0]);  // sayılar kümesinin 1. elamanı ekrana yazdırılır eger 0 yerine 3 olsaydı 4.elamanı yazardı
	getch(); //kümeler hafızaya 0 dan başlayarak hafızaya alır 1.elaman kümenin 0 ıncı elamanıdır
	return 0;
}