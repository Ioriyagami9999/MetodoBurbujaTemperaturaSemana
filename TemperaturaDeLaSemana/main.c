#include <stdio.h>
#include <stdlib.h>
#include <conio.h>





void capturaDatos(){

char *semana[]= {"LUNES","MARTES","MIERCOLES","JUEVES","VIERNES","SABADO","DOMINGO"};
int  c, j,b,contM,contMen,d,v;
  float  array[100],n=7.0,swap,menorT,mayorT;


for(b=0;b<n;b++){
  printf("Capture la temperatura promedio del dia %s%s",semana[b]," : ");
   scanf("%f", &array[b]);

}
    if (array[0]>array[1]&&array[0]>array[2]&&array[0]>array[3]&&array[0]>array[4]&&array[0]>array[5]&&array[0]>array[6]&&array[0]>array[7] ){
contM=0;


    }
    else{
    if (array[1]>array[0]&&array[1]>array[2]&&array[1]>array[3]&&array[1]>array[4]&&array[1]>array[5]&&array[1]>array[6]&&array[1]>array[7]){
contM=1;

    }else{

    if (array[2]>array[0]&&array[2]>array[1]&&array[2]>array[3]&&array[2]>array[4]&&array[2]>array[5]&&array[2]>array[6]&&array[2]>array[7]){
contM=2;

    }else{
    if (array[3]>array[0]&&array[3]>array[1]&&array[3]>array[2]&&array[3]>array[4]&&array[3]>array[5]&&array[3]>array[6]&&array[3]>array[7]){
contM=3;

    }else{

        if (array[4]>array[0]&&array[4]>array[1]&&array[4]>array[2]&&array[4]>array[3]&&array[4]>array[5]&&array[4]>array[6]&&array[4]>array[7]){
contM=4;

    }else{

        if (array[5]>array[0]&&array[5]>array[1]&&array[5]>array[2]&&array[5]>array[3]&&array[5]>array[4]&&array[5]>array[6]&&array[5]>array[7]){
contM=5;

        }else{
        if (array[6]>array[0]&&array[6]>array[1]&&array[6]>array[2]&&array[6]>array[3]&&array[6]>array[4]&&array[6]>array[5]&&array[6]>array[7]){
contM=6;

        }else{
        if (array[7]>array[0]&&array[7]>array[1]&&array[7]>array[2]&&array[7]>array[3]&&array[7]>array[4]&&array[7]>array[5]&&array[7]>array[6]){
contM=7;

        }


        }

        }


    }

    }


    }


    }


    }

if(array[0]<array[1]&&array[0]<array[2]&&array[0]<array[3]&&array[0]<array[4]&&array[0]<array[5]&&array[0]<array[6]/*array[0]<array[7]*/){
contMen=0;



}else{
if(array[1]<array[0]&&array[1]<array[2]&&array[1]<array[3]&&array[1]<array[4]&&array[1]<array[5]&&array[1]<array[6]){
contMen=1;



}else{
if(array[2]<array[0]&&array[2]<array[1]&&array[2]<array[3]&&array[2]<array[4]&&array[2]<array[5]&&array[2]<array[6]){
    contMen=2;


}if (array[3]<array[0]&&array[3]<array[1]&&array[3]<array[2]&&array[3]<array[4]&&array[3]<array[5]&&array[3]<array[6]){

contMen=3;

}else {

if (array[4]<array[0]&&array[4]<array[1]&&array[4]<array[2]&&array[4]<array[3]&&array[4]<array[5]&&array[4]<array[6]){

    contMen=4;
}else{

if(array[5]<array[0]&&array[5]<array[1]&&array[5]<array[2]&&array[5]<array[3]&&array[5]<array[4]&&array[5]<array[6]){
    contMen=5;


}else{

if(array[6]<array[0]&&array[6]<array[1]&&array[6]<array[2]&&array[6]<array[3]&&array[6]<array[4]&&array[6]<array[5]){
    contMen=6;


}



}


}


}


}

}









  for (c = 0; c < n; c++)
{
     for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1])
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
}


  printf("Valores ordenados de forma ascendente son:\n");
  printf("\n");

  for (c = 0; c<7; c++){
    printf("%.2f", array[c]);
mayorT=array[c];
if(c<6){
    printf(" , ");

}

  }
  printf("\n");




printf("Los valores ordenados de forma descendente son: \n");
  printf("\n");

for  (c = 6; c>=0; c--){
      printf("%.2f",array[c]);
menorT=array[c];
if(c>0){
    printf(" , ");

}

}
  printf("\n");


 printf("El dia mas caluroso fue el %s%s \n   ","  :  ", semana[contM]);


  printf("\n");


    printf("El dia mas frio fue el%s%s \n   ","  :  ", semana[contMen]);





}

int main (int argc, char*argv){

capturaDatos();
getch();
return 0;

}
