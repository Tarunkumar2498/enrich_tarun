/*program to left rotate a number by n times.
  ex; 
        input
          number:1234
          no:of times;2
        output:  3412*/
//This code is written in c
#include<stdio.h>
#include<string.h>
void main(){
  int j,n,rem,l; //n-no:of times
  char num[100];
  scanf("%s",num); //number input
  scanf("%d",&n); //input no:of times
  l=strlen(num);
  rem=n%l; //gives the location of first character of left rotated number 
  for(j=rem;j<l;j++){
      printf("%c",num[j]);
      }
  for(j=0;j<rem;j++){
      printf("%c",num[j]);
      }
 }
