/*kütüphaneler*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>


/*struct tipinde dizi tanimi*/
struct ozellikler{
    char vurucu1[20],vurucu2[20],vurucu3[20],vurucu4[20],kaleci1[20],kaleci2[20],kaleci3[20],kaleci4[20];
    int t1toplam,t2toplam;//takimlarin skoru tutan degisken
}oyuncu;

int tarih(){
time_t t;
time(&t);
printf("Mac tarihi: %s",ctime(&t));
}

int main(){



    restart:
printf("----------------------------------------------------------------\n");
    printf("-----------------CRICKET OYUNUNA HOS GELDINIZ-------------------\n");
    printf("----------------------------------------------------------------\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("KURALLAR:\n");
    printf("1.Takimlar 4er kisi olmak uzere 2 vurucudan ve 2 kaleciden olusmaktadir.\n");
    printf("2.Her takimin 2 defa atis hakke vardir ve dururdugu her wickets icin 5 puan kazanir.\n");
    printf("3.Top kaleci tarafindan vuruldugunda karsi takim topu 30 saniye icinde yakalarsa '10', 30.saniyede yakalarsa '5',30 saniyeden fazla bir surede yakalarsa '7'puan kazanir.\n");
    printf("4.Daha cok puan toplayan takim kazanir.\n");
    printf("\n");
    printf("\n");
    printf("\n");
   


    char takim1[20],takim2[20];//takimlarin isimlerini diziye atamak icin olusturulan yapi
   

//kullanicidan verileri alan kodun baslangici
    printf("1.Takimin ismini yaziniz :");
    scanf("%s",takim1);
    printf("2.takimin ismini yaziniz :");
    scanf("%s",takim2);
    printf("\n");

    printf("1.takimin adi   : %s\n\n",takim1);

    printf("1.takimin 1.vurucu oyuncusu :");
    scanf("%s",oyuncu.vurucu1);
    printf("1.takimin 2.vurucu oyuncusu :");
    scanf("%s",oyuncu.vurucu2);
    printf("1.takimin 1.kaleci oyuncusu :");
    scanf("%s",oyuncu.kaleci1);
    printf("1.takimin 2.kaleci oyuncusu :");
    scanf("%s",oyuncu.kaleci2);
    printf("\n");

    printf("2.takimin adi   : %s\n\n",takim2);

    printf("2.takimin 1.vurucu oyuncusu :");
    scanf("%s",oyuncu.vurucu3);
    printf("1.takimin 2.vurucu oyuncusu :");
    scanf("%s",oyuncu.vurucu4);
    printf("1.takimin 1.kaleci oyuncusu :");
    scanf("%s",oyuncu.kaleci3);
    printf("1.takimin 2.kaleci oyuncusu :");
    scanf("%s",oyuncu.kaleci4);
    printf("\n\n");
   
//kulanicidan verileri alan kodun bitisi
   
   
int n;
int puan[4];//puan saklayan dizi
int k=0;
   
    for (k; k<4; k++){//soru sormak icin bir for dongusu
    printf(" %d vurucu kac tane wicket dusurdu :",(k+1));
        scanf("%d",&n);
       
        for(n; n>6;){
   
    if(n>6){//kullanicinin 6 dan fazla sayi girmesini engelleyen kod
    printf("6 dan fazla wicket dusuremezsiniz.\n\a");
    printf("Lutfen daha kucuk bir sayi giriniz :");
    scanf("%d",&n);
}

}
        puan[k] = n*5;//vurucun puanini hesaplayan ve diziye atayan kod
       
}
printf("\n");
printf("%s oyuncusunun wicket puani  : %d\n",oyuncu.vurucu1,puan[0]);
printf("%s oyuncusunun wicket puani  : %d\n",oyuncu.vurucu2,puan[1]);
printf("%s oyuncusunun wicket puani  : %d\n",oyuncu.vurucu3,puan[2]);
printf("%s oyuncusunun wicket puani  : %d\n",oyuncu.vurucu4,puan[3]);
    printf("\n\n");
   
    int t1wicket,t2wicket;//wicketslar skorunu tutan degiskenler
    t1wicket = puan[0] + puan[1];
    t2wicket = puan[2] + puan[3];



int s;
int kpuan;
printf("%s kosucusu kac saniyede topu tutmustur :",oyuncu.kaleci1);
scanf("%d",&s);
if (s>30){
kpuan = 5;

}
if (s<30){
kpuan= 10;
}
if (s==30){
kpuan = 7;
}


int s2;
int kpuan2;
printf("%s kosucusu kac saniyede topu tutmustur :",oyuncu.kaleci2);
scanf("%d",&s2);
if (s2>30){
kpuan2 = 5;

}
if (s2<30){
kpuan2= 10;
}
if (s2==30){
kpuan2 = 7;
}

int s3;
int kpuan3;
printf("%s kosucusu kac saniyede topu tutmustur :",oyuncu.kaleci3);
scanf("%d",&s3);
if (s3>30){
kpuan3 = 5;

}
if (s3<30){
kpuan3= 10;
}
if (s3==30){
kpuan3 = 7;
}


int s4;
int kpuan4;
printf("%s kosucusu kac saniyede topu tutmustur :",oyuncu.kaleci4);
scanf("%d",&s4);
if (s4>30){
kpuan4 = 5;

}
if (s4<30){
kpuan4 = 10;
}
if (s4==30){
kpuan4 = 7;
}

printf("\n\n");
printf(" %s kalecisini top yakalama puani : %d\n",oyuncu.kaleci1,kpuan);
printf(" %s kalecisini top yakalama puani : %d\n",oyuncu.kaleci2,kpuan2);
printf(" %s kalecisini top yakalama puani : %d\n",oyuncu.kaleci3,kpuan3);
printf(" %s kalecisini top yakalama puani : %d\n\n",oyuncu.kaleci4,kpuan4);


oyuncu.t1toplam = kpuan + kpuan2 + t1wicket;
oyuncu.t2toplam = kpuan3 + kpuan4 + t2wicket;




int  islem;


score:printf("1 ) skor tablosu:\n2 ) istatistikler: \n3 ) tekrar mac yap :\n4 ) cikis  :\n");
tekrar : printf("ne yapmak istiyorsunuz :");
scanf("%d",&islem);


switch(islem){

case 1:
            printf("------------SKOR TABLOSU-----------\n");
            printf("%s                            %s\n\n",takim1,takim2);
printf("%d puan                       %d puan \n",oyuncu.t1toplam,oyuncu.t2toplam);
tarih();

if(oyuncu.t1toplam>oyuncu.t2toplam){
printf("------KAZANAN TAKIM    : %s --------- \n\n",takim1);
}
if (oyuncu.t1toplam<oyuncu.t2toplam){
printf("------KAZANAN TAKIM    : %s -------- \n\n",takim2);
}
if (oyuncu.t1toplam == oyuncu.t2toplam){
printf("-------- MAC BERABERE BITMISTIR --------\n\n");
}

goto score;//SWITCH kodunun basina tekrar gider ve yeniden baslar
 
case 2:
               printf("------------ISTATISTIKLER-----------\n\n");
printf("OYUNCU       WICKETS PUANI      YAKALAN TOP PUANI       TOPLAM PUAN\n\n\n");
printf("%s                 %d                   %d               %d\n",oyuncu.vurucu1,puan[0],0,puan[0]);
printf("%s                 %d                   %d               %d\n",oyuncu.vurucu2,puan[1],0,puan[1]);
printf("%s                 %d                   %d               %d\n",oyuncu.vurucu3,puan[2],0,puan[2]);
printf("%s                 %d                   %d               %d\n\n",oyuncu.vurucu4,puan[3],0,puan[3]);

printf("%s                  %d                   %d               %d\n",oyuncu.kaleci1,0,kpuan,kpuan);
printf("%s                  %d                   %d               %d\n",oyuncu.kaleci2,0,kpuan2,kpuan2);
printf("%s                  %d                   %d               %d\n",oyuncu.kaleci3,0,kpuan3,kpuan3);
printf("%s                  %d                   %d               %d\n\n",oyuncu.kaleci4,0,kpuan4,kpuan4);
tarih();
goto score;

case 3:
  goto restart;//kodun basladigi noktaya doner ve tekrar calistirir
         
case 4:
  exit(1);


        default : printf("yanlis bir deger girdiniz \n"); goto tekrar;
}
}
