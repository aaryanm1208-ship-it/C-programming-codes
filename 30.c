//THIS PROGRAM IS TO RUN THE sum OF THE NUMBER 
USING FOR LOOP and  REVERSE A NUMBER 
#include<stdio.h> 
#include<math.h> 
int main(){ 
int n; 
printf("enter the value of n\n"); 
scanf("%d",&n); 
int sum=0; 
for (int i=1 ; i<=n ; i++){ 
sum=sum+i; 
} 
printf("sum is %d\n",sum); 
for(int i=n ; i>=1 ; i--){ 
printf("%d",i); 
} 
return 0; 
} 
