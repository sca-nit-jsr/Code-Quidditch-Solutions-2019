#include <stdio.h>
#include <string.h>
#include <conio.h>
void main(){
     char name[20];
     int i,j,k;
     clrscr();
     printf("\nEnter a string : ");
     scanf("%s",name);
     for(i=0;i<strlen(name);i++){
    printf("\n");
    for(j=i+1;j<strlen(name);j++)
          printf("%c",name[j]);
    for(k=0;k<=i;k++)
          printf("%c",name[k]);
     }
getch();
}