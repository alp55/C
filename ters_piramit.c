#include <stdio.h>
#include <conio.h>
int main()
{
    int r=0, t=0, satir,e=1;

    printf("Satir sayisini girin: "); //girilen sayı kadar satır ekler ve ters piramit oluşturur
    scanf("%d",&satir);

   e=satir-1;

    for(r=satir; r>=1; --r)
    {

for (int t = 0; t<=satir-r; ++t)
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
