#include <stdio.h>
 int main(){

    int vetorA[3];
    int i=0;
     printf("Digite 3 valores para adicionarmos ao vetor A: \n");
     
     for(i =0; i<3;i++)
     {
      scanf("%d",&vetorA[i]);
    
     }
     
     int x =0;
     for(  x=0;x<3;x++)
     {
      printf("Os valores armazenados no vetorA sao: [%d] \n",vetorA[x]);
    
     }

 }