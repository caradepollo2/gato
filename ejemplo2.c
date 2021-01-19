#include <stdio.h>
#include <stdlib.h>
int main()
{
int a[5],i,num;
for(i=0; i<5;i++){
printf("Digite el numero:\n");
scanf(" %d",&num);
a[i]=num;
}
printf("\nEscribiendo el arreglo con los datos leidos:\n\n");
for(i=0; i<5;i++){
printf("a[%d]= %d\n\n",i , a[i]);
}
system("pause");
return 0;
}
