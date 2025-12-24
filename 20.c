// NESTED IF CONDITION 
#include<stdio.h> 
int main() 
{ 
int marks; 
printf("JALDI SE EK NUMBER TYPE KARO - JYADA 
SOCHO MAT"); 
scanf("%d",&marks); 
if(30 >= marks){ 
printf("BETA APNE MUMMY PAPA KO BULAO\n"); 
printf("C-GRADE\n"); 
} 
else if(30<=marks && 80>=marks){ 
printf("AAP AUR BHI ACCHA KAR SAKTE THE\n"); 
printf("B-GRADE\n"); 
} 
else if(80<marks && 100>=marks){ 
printf("EXCELLENT\n"); 
printf("A++ - grade\n"); 
} 
else{ 
printf("not a valid marks\n"); 
} 
printf("Thank You\nBest luck for the future"); 
return 0;  
}
