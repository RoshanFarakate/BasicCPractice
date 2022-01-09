#include<stdio.h>
 int main(){
     int n,i=1;
     printf("Enter a number: ");
     scanf("%d",&n);
     int fact =1;
     for(i=1;i<=n;i++){
         fact =fact*i;
     }
     printf("Factorial of %d is %d: ",n,fact);
 }
