#include<stdio.h>
int main()
{
   int Arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i=0;        // Loop Counter

 for(i=0;i<9;i++){
  Arr[i]=Arr[i+1];
 }
 Arr[9]=1;
 for(i=0;i<10;i++){
printf("%d \n",Arr[i]);
 }
 return 0;
}