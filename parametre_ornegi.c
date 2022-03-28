#include <stdio.h>
#include <conio.h>
int deger(int lmt1);

int main(void)
{
printf("say top: %d\n",deger(10));
return 0;
}
int deger(int lmt1)
{
int d1,d2;
for (d1=1,d2=0; d1 < lmt1;d1++)
{
	printf("%d\n",d1 );

d2+=d1;
}
printf("\n");
return d2;


}