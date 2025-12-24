//THIS PROGRAM IS TO RUN THE AVERAGE OF THE 
NUMBER USING FOR LOOP 
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
return 0; 
} 
