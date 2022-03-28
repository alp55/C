#include <stdio.h>
#include <conio.h>
int main()
{
    int i, a, satir, k=1, b = 0, c = 0,f,e=1,t,r;

    printf("Satir sayisini girin: ");
    scanf("%d",&satir);

     e=satir-1;
     f=satir-1;


    for(i=1; i<=satir; ++i)
    {


for (int b = 1; b <=satir-i; ++b)
{

	printf("  ");
}


for (int a = 0; a <=i*2-2; ++a)
{

	printf("%d ",k);

}
printf("\n");

k=k+1;
a=a+1;
}


for(r=f; r>=1; --r)
    {

for (int t = 0; t<=f-r; ++t)
{

    printf("  ");
}

for (int t = 0; t <=2*r-2; ++t)
{ 


    printf("%d ",e);

}
e--;
printf("\n");



}
  getch();
    return 0;

}