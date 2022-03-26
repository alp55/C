#include <stdio.h>
#include <conio.h>



int main(int argc, char const *argv[])
{
	int sayi=8;
	while(sayi>0) // sayi pozitif oldugu sürece while döngüsü devam eder
	{
sayi--;

if(sayi==3) //sayi 3 eşit olursa
	
break; // program break fonsiyonu ile while döngüsünü kırar program biter 
printf("%d\n",sayi);



	}
	getch();

	return 0;
}