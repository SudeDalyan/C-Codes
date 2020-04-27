#include <stdio.h>
#include <stdlib.h>


int mat[5][5]={   {1,1,1,1,1},
                  {0,1,0,0,1},
                  {0,1,0,1,1},
                  {1,1,1,0,1},
                  {0,0,1,1,1}};
   int yol [5][5]={0};
   int flag=0;


int main()

{ int j=0,k=0;

printf("---Matris---\n");
printf("\n");
   while (j<5){
    while(k<5){
    	
        printf("%d",mat[j][k]);
        k++;
    }
    k=0;
printf("\n");
   j++;  }
printf("\n");   
printf("---Matrisin kisa yolu---\n");
printf("\n");
kisayol(0,0,0);
return 0;
}

	

void kisayol(int x,int y){
yol[x][y]=1;


    
if (flag==0){ 
    printf("Kordinatlar:%d,%d\n",x,y);
if(x==4 && y==4){
    flag=1;
}

 }
 
if(x<5 &&   mat[x+1][y]==1 &&  yol[x+1][y]==0)
kisayol(x+1,y);
if(y<5  &&   mat[x][y+1]==1 &&  yol[x][y+1]==0)
kisayol(x,y+1);
if(x>0  &&   mat[x-1][y]==1 &&  yol[x-1][y]==0 )
kisayol(x-1,y);
if(y>0  &&   mat[x][y-1]==1 &&  yol[x][y-1]==0)
kisayol(x,y-1);


}

