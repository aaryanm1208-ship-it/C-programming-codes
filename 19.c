// NESTED IF CONDITION 
#include<stdio.h> 
int main() 
{ 
int num; 
printf("JALDI SE EK NUMBER TYPE KARO - JYADA 
SOCHO MAT\n"); 
scanf("%d",&num); 
if(num > 0){ 
printf("AAPKA NUMBER POSITIVE HAI"); 
if(num % 2 == 0){ 
printf("YE NUMBER EVEN BHI HAI"); 
} 
} 
else{ 
printf("SORRY BUT NUMBER NEGATIVE HAI"); 
} 
return 0; 
} 
