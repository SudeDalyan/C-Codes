#include <stdio.h>
#include <stdlib.h>
#include <time.h>

	     	

int main(){

int satir,sutun,ksatir,ksutun;
		printf("Birinci matris kac satirdan olussun:");
			scanf("%d",&satir);
		printf("Birinci matris kac sutundan olussun:");
			scanf("%d",&sutun);
		printf("Ikinci matris kac satirdan olussun:");
			scanf("%d",&ksatir);
		printf("Ikinci matris kac sutundan olussun:");
			scanf("%d",&ksutun);

	int matris1[satir][sutun]={0};
	int sonuc[satir][sutun]={};
	int matris2[ksatir][ksutun]={0};
			     	
	srand(time(NULL));
	for(int i=0;i<satir;i++){
		for(int j=0;j<sutun;j++){
			matris1[i][j]=rand()%100+1;	
		}
	}
	
		printf("--Birinci matris--\n\n");
	for(int i=0;i<satir;i++){
		for(int j=0;j<sutun;j++){
			printf("%d ",matris1[i][j]);
		}
		printf("\n");
	}
	
	printf("---Ikinci matris icin deger giriniz---\n");
	for(int a=0;a<ksatir;a++){
		for(int b=0;b<ksutun;b++){
			{ printf("%d satir %d sutun: ",a+1,b+1);  }
			int key;
			scanf("%d",&key);
			matris2[a][b]=key;
		}
	}
	printf("--Ikinci matris--\n\n");
	for(int i=0;i<ksatir;i++){
		for(int j=0;j<ksutun;j++){
			printf("%d ",matris2[i][j]);
		}
		printf("\n");
	}
	
	
	for(int i=1;i<satir-1;i++){
		for(int j=1;j<sutun-1;j++){
		sonuc[i][j] =( 
				matris1[i-1][j-1] * matris2[0][0] +
			    matris1[i][j-1]   * matris2[1][0] +
		    	matris1[i+1][j-1] * matris2[2][0] +      
				matris1[i-1][j]   * matris2[0][1] +     
				matris1[i][j]     * matris2[1][1] +
				matris1[i+1][j]   * matris2[2][1] +
				matris1[i-1][j+1] * matris2[0][2] +
				matris1[i][j+1]   * matris2[1][2] +
				matris1[i+1][j+1] * matris2[2][2] 
				);
		}
	}
	
	
	printf("\n--Sonuc--\n\n");
	for(int i=0;i<satir;i++){
		for(int j=0;j<sutun;j++){
			printf("%d ",sonuc[i][j]);
		}
		printf("\n");
	}
	
	
}

