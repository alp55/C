#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
int t=0,e=0,cno,sno1=0,sno2=0,b,ur1=0,ur2=0,ur3=0,ur1t=0,ur2t=0,ur3t=0;

printf("BILGILENDIRME \n");
printf("urun bir fiyati 10 birim \n");
printf("urun iki fiyati 20 birim \n");
printf("urun uc fiyati 30 birim \n");


while(b>=1)
{
	int s1ur1=0,s1ur2=0,s1ur3=0,s2ur1=0,s2ur2=0,s2ur3=0;
	printf("\nelaman no giriniz :");

scanf ("%d",&cno);


switch (cno)
{
case 1 :
printf("satilan urun no giriniz : ");
scanf("%d",&sno1);
{
if(sno1==1)
{
printf("1 nolu satilan urun miktari giriniz :");
scanf("%d",&s1ur1);
}
else if(sno1==2)
{
printf("2 nolu satilan urun miktari giriniz :");
scanf("%d",&s1ur2);
}
else if(sno1==3)
{
printf("3 nolu satilan urun miktari giriniz :");
scanf("%d",&s1ur3);
}
}
break;

case 2 :
printf("satilan urun no giriniz :");
scanf("%d",&sno2);
if(sno2==1)
{
printf("1 nolu satilan urun miktari giriniz :");
scanf("%d",&s2ur1);
}
else if(sno2==2)
{
printf("2 nolu satilan urun miktari giriniz :");
scanf("%d",&s2ur2);
}
else if(sno2==3)
{
printf("3 nolu satilan urun miktari giriniz :");
scanf("%d",&s2ur3);
}

break;

default :
printf("böyle bir musteri satis elamani yoktur \n");
break;
}


printf("\n elaman no:%d ",cno);
printf("\n satilan urun no :%d",sno1+sno2);
printf("\n satilan urun miktari :%d \n",s1ur1+s1ur2+s1ur3+s2ur1+s2ur2+s2ur3);
printf("\n cikmak icin 0 tuslayin devam etmekmicin 9 tiklayabilirisniz :");
scanf("%d",&b);
sno1=0;
sno2=0;
t=(s1ur1*10)+(s1ur2*20)+(s1ur3*30)+t;
e=(s2ur1*10)+(s2ur2*20)+(s2ur3*30)+e;
ur1=s2ur1+s1ur1+ur1;
ur2=s1ur2+s2ur2+ur2;
ur3=s1ur3+s2ur3+ur3;
ur1t=(s2ur1+s1ur1)*10+ur1t;
ur2t=(s1ur2+s2ur2)*20+ur2t;
ur3t=(s1ur3+s2ur3)*30+ur3t;

}

printf("\nbirinci elamanin yaptigi satis tutari :%d \n",t);
printf("ikinci elamanin yaptigi satis tutari :%d \n",e);
printf("1 nolu urun satis adeti : %d \n",ur1);
printf("2 nolu urun satis adeti : %d \n",ur2);
printf("3 nolu urun satis adeti : %d \n",ur3);
printf("1 nolu urun satis tutari : %d \n",ur1t);
printf("2 nolu urun satis tutari : %d \n",ur2t);
printf("3 nolu urun satis tutari : %d \n",ur3t);
getch();
	return 0;
}