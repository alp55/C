#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int i,n,dolu=0,bos=40;
	char oto[40];
	for (int i = 1; i < 40; ++i)
	{
		oto[i]='B';
	}
	while(bos!=0)
	{
		printf("Bos koltuklar:");
		for (int i = 1; i < 40; ++i)
		{
			if(oto[i]=='B')
			{
				printf("%d ",i);
			}
		}
	printf("bos koltuklara secim yapiniz.");
	scanf("%d",&n);

	if(oto[n]=='D')
    {
printf("Sectiginiz koltuk dolu\n");

	}
	else if(oto[n]=='B')
	{
		oto[n]='D';
		dolu++;
		bos--;
		printf("Sectiginiz koltuk bos\n");
	}

	printf("dolu koltuk sayisi:%d\n",dolu );
	printf("bos koltuk sayisi:%d\n",bos);
}
	return 0;
}