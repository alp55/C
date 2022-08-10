#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
	int n,i,enk=0,enb=0;
	printf("kac sayi giriceksiniz\n");
	scanf("%d",&n);
	int dizi[n],c=1,k=1,tenb,tenk;
	for (int i = 1; i <= n; ++i)
	{
		printf("%d dizi elamini:",i);
		scanf("%d",&dizi[i]);
		
		if(i==1)
		{
			enb=dizi[i];
			enk=dizi[i];

		}
		if(dizi[i]>enb)
		{
   enb=dizi[i];
k=i;
		}
     else if(dizi[i]<enk)
        {
    enk=dizi[i];
c=i;
        }



	}




	printf("%d.dizi en buyuk %d \n",k,enb);
	printf("%d.dizi en kucuk %d \n",c,enk);
	getch();
	return 0;
} //Alperen Ulutaş 21630480