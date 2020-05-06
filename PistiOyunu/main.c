#include <cstdlib>
#include <iostream.h>
main()
{char isim[20];int op=0,bp=0;
 srand ( time(NULL) );
 int kart[52]={0};
      cout<<“lutfen oyuncu adinizi giriniz>> \n”;
      gets(isim);
       cout<<“kartlar kariliyor…”<<endl;
      {  kart[0]=(rand()%52)+1;
      for(int i=1;i<=51;i++){
 sec:    int rsayi=(rand()%52)+1;
int var=0;
 for(int j=0;j<=i;j++){

         if (kart[j]==rsayi && i>0){
         var++;
         }

              }
              if(var!=0){
                        goto sec;
                         }
                         else
                     kart[i]=rsayi;
              }}//çalýþýyor
              cout<<“kartlar karildi”<<endl;

              cout<<“kartlar dagýtýlýyor… “<<endl;
              cout<<“yere acilan kagitlar”<<endl;
for(int ac=0;ac<=3;ac++){
        if(kart[ac]>=1&&kart[ac]<=10)
        cout<<“sinek  “<<kart[ac]<<”  “;
        if(kart[ac]==11)
        cout<<“sinek vale  “;
        if(kart[ac]==12)
        cout<<“sinek kiz  “;
         if(kart[ac]==13)
        cout<<“sinek papaz  “;
       else if(kart[ac]>=14&&kart[ac]<=23)
        cout<<“maca  “<<kart[ac]-13<<”  “;
       if(kart[ac]==24)
        cout<<“maca vale  “;
        if(kart[ac]==25)
        cout<<“maca kiz  “;
         if(kart[ac]==26)
        cout<<“maca papaz “;
       else if(kart[ac]>=27&&kart[ac]<=36)
        cout<<“karo  “<<kart[ac]-26<<”  “;
         if(kart[ac]==37)
        cout<<“karo vale  “;
         if(kart[ac]==38)
        cout<<“karo kiz  “;
         if(kart[ac]==39)
        cout<<“karo papaz  “;
        else if(kart[ac]>=40&&kart[ac]<=49)
        cout<<“kupa  “<<kart[ac]-39<<”  “;
        if(kart[ac]==50)
        cout<<“kupa vale  “;
        if(kart[ac]==51)
        cout<<“kupa kiz  “;
         if(kart[ac]==52)
        cout<<“kupa papaz  “;
        cout<<“”<<endl;
        }
        int enson=3;
    int el=1;{ dagit: int okt[4];int bkt[4];
     oyun: for(int i=0;i<=3;i++){
             okt[i]=kart[enson+1];
             enson++;
              }
     for(int i=0;i<=3;i++){
             bkt[i]=kart[enson+1];
             enson++;
              }
      cout<<“elinizdeki kagitlar”<<endl;int syi=1;
               for(int bil=0;bil<=3;bil++){
                       cout<<syi<<”  “;
              if(okt[bil]>=1&&okt[bil]<=10)
        cout<<“sinek “<<okt[bil]<<”  “;
        if(okt[bil]==11)
        cout<<“sinek vale  “;
        if(okt[bil]==12)
        cout<<“sinek kiz   “;
         if(okt[bil]==13)
        cout<<“sinek papaz  “;
       else if(okt[bil]>=14&&okt[bil]<=23)
        cout<<“maca “<<okt[bil]-13<<”  “;
       if(okt[bil]==24)
        cout<<“maca vale  “;
        if(okt[bil]==25)
        cout<<“maca kiz  “;
         if(okt[bil]==26)
        cout<<“maca papaz  “;
       else if(okt[bil]>=27&&okt[bil]<=36)
        cout<<“karo “<<okt[bil]-26<<”  “;
         if(okt[bil]==37)
        cout<<“karo vale  “;
         if(okt[bil]==38)
        cout<<“karo kiz  “;
         if(okt[bil]==39)
        cout<<“karo papaz  “;
        else if(okt[bil]>=40&&okt[bil]<=49)
        cout<<“kupa “<<okt[bil]-39<<”  “;
        if(okt[bil]==50)
        cout<<“kupa vale  “;
        if(okt[bil]==51)
        cout<<“kupa kiz  “;
         if(okt[bil]==52)
        cout<<“kupa papaz  “;
            cout<<“”<<endl; syi++;}//çalýþýyor
          for(int kat=0;kat<=3;kat++)
          {int  y_enson=3,y_ksayi=4;
      int   pisti=y_ksayi;
     bool sec[4]={0};
     int at;
     cout<<“yere atmak icin bir kart secin 1-4 arasi “<<endl;
    yat:    cin>>at;cout<<okt[at-1]<<endl;
        if(sec[at-1]==false)
        {sec[at]==true;
        y_ksayi++;
      if(kart[y_enson]==okt[at-1]+13||kart[y_enson]==okt[at-1]+26||kart[y_enson]==okt[at-1]+39||kart[y_enson]==okt[at-1]-13||kart[y_enson]==okt[at-1]-26||kart[y_enson]==okt[at-1]-39||okt[at-1]==11||okt[at-1]==24||okt[at-1]==37||okt[at-1]==50){
       y_ksayi=0;
       cout<<“yerdeki kartlari aldiniz”<<endl;  }
      if((pisti==1||y_ksayi==0)&&(kart[y_enson]==okt[at-1]+13||kart[y_enson]==okt[at-1]+26||kart[y_enson]==okt[at-1]+39||kart[y_enson]==okt[at-1]-13||kart[y_enson]==okt[at-1]-26||kart[y_enson]==okt[at-1]-39))
      {
        op+=10;
      cout<<“pisti yaptiniz”<<endl;
      }

        }
        else if(at<1||at>4){
        cout<<“lütfen bir ile dört arasý bir sayi giriniz”<<endl;
        goto yat;
        }
        else{
             cout<<“daha önce bu kartý attýnýz lutfen baska bir kart seciniz”<<endl;
        goto yat;
             }
    { y_enson==bkt[at];
    if(bkt[at-1]>=1&&bkt[at-1]<=10)
        cout<<“sinek “<<bkt[at-1]<<”  “;
        if(bkt[at-1]==11)
        cout<<“sinek vale  “;
        if(bkt[at-1]==12)
        cout<<“sinek kiz   “;
         if(bkt[at-1]==13)
        cout<<“sinek papaz  “;
       else if(bkt[at-1]>=14&&bkt[at-1]<=23)
        cout<<“maca “<<bkt[at-1]-13<<”  “;
       if(bkt[at-1]==24)
        cout<<“maca vale  “;
        if(bkt[at-1]==25)
        cout<<“maca kiz  “;
         if(bkt[at-1]==26)
        cout<<“maca papaz  “;
       else if(bkt[at-1]>=27&&bkt[at-1]<=36)
        cout<<“karo “<<bkt[at-1]-26<<”  “;
         if(bkt[at-1]==37)
        cout<<“karo vale  “;
         if(bkt[at-1]==38)
        cout<<“karo kiz  “;
         if(bkt[at-1]==39)
        cout<<“karo papaz  “;
        else if(bkt[at-1]>=40&&bkt[at-1]<=49)
        cout<<“kupa “<<bkt[at-1]-39<<”  “;
        if(bkt[at-1]==50)
        cout<<“kupa vale  “;
        if(bkt[at-1]==51)
        cout<<“kupa kiz  “;
         if(bkt[at-1]==52)
        cout<<“kupa papaz  “;
            cout<<“”<<endl;
        y_ksayi++;
      if(kart[y_enson]==bkt[at-1]+13||kart[y_enson]==bkt[at-1]+26||kart[y_enson]==bkt[at-1]+39||kart[y_enson]==bkt[at-1]-13||kart[y_enson]==bkt[at-1]-26||kart[y_enson]==bkt[at-1]-39||bkt[at-1]==11||bkt[at-1]==24||bkt[at-1]==37||bkt[at-1]==50){
       y_ksayi=0;
       cout<<“bilgisayar yerdeki kartlari aldi”<<endl;
      if((pisti==1||y_ksayi==0)&&(kart[y_enson]==bkt[at-1]+13||kart[y_enson]==bkt[at-1]+26||kart[y_enson]==bkt[at-1]+39||kart[y_enson]==bkt[at-1]-13||kart[y_enson]==bkt[at-1]-26||kart[y_enson]==bkt[at-1]-39))
      {
        bp+=10;
      cout<<“bilgisayar pisti yapti”<<endl;
      }
      }
        }if(kat==3&&el!=6){
    if(el==6){goto son;}el++;
                           goto dagit;}

        }

        }
        son:cout<<“bilgisayarýn puaný:”<<bp<<endl;
        cout<<“sizin puanýný<“<<op<<endl;
    system(“PAUSE”);
}
