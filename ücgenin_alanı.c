#include <stdio.h>
#include <conio.h>
int main()
{
	float ust,taban,alan;
	printf("üst kenar giriniz \n");

	scanf("%f",&ust);

	printf("taban giriniz\n");
	scanf("%f",&taban);
alan=ust*taban/2;
printf("alan %0.02f \n",alan); // üst kenar ve taban girilir alan hesaplanıp ekrana alan yazdırılır
getch();

	return 0;
}