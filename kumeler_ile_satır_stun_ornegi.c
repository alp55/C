 #include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{





	int say[4][4]; //4 Satır ve 4 stun için 4 e 4 lük küme oluşturuldu

for (int e = 0; e < 3; ++e)
	{
		for (int t = 0; t < 3; ++t)
		{
	

	printf("%d .stun %d .satir gir ",t+1,e+1 ); // satır ve stunlara deger girilmesi istendi 
	scanf("%d",&say[e][t]);

			}
		printf("\n");
	}



	for (int i = 0; i < 3; ++i)
	{
		for (int f = 0; f < 3; ++f)
		{
	

	printf("%d",say[i][f] );     //ekrana satır ve stunlar denk gelcek şekildeyazdırtma işlemi yapıldı

			}
		printf("\n");
	}
	getch();
	return 0; 
}