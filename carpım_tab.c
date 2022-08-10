#include <stdio.h>
#include <conio.h>
int main()
{
	int sutun,satir,f;
	printf("sutun sayisi yazınız\n");
	scanf("%d",&sutun);
	printf("satır sayisini yazınız\n");
	scanf("%d",&satir);
	for (int i = 1; i <= sutun; ++i)
	{
		
		
		for (int f = 1; f <= satir; ++f)
		{
			printf("%d \t",i*f);
		}

		printf("\n");
	}

	getch();
	return 0;
}