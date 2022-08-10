#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(){
  int i,macsayisi,isabetlipas,hatalipas;
  float p,puan[3],max_puan,max;
  for(i=1;i<=3;i++){
    printf("%d-inci oyuncu icin: \n",i);
    printf("oynanilan mac sayisi, isabetli pas, hatali pas degerini giriniz:");
    scanf("%d %d %d",&macsayisi,&isabetlipas,&hatalipas);
    p=(float)(isabetlipas-hatalipas)/macsayisi;
    puan[i]=p;
  }
  for(i=1;i<=3;i++){
    printf("%d-inci oyuncunun puani: %f \n",i,puan[i]);
  }
  if(puan[1]>puan[2] && puan[1]>puan[3]){
    printf("Birinci oyuncu en yuksek puana sahiptir");
  }
  else if(puan[2]>puan[1] && puan[2]>puan[3]){
    printf("ikinci oyuncu en yuksek puana sahiptir");
  }
  else{
    printf("ucuncu oyuncu en yuksek puana sahiptir");
  }
  getch();
}