#include <stdio.h> 
int main() { 
int marks; 
printf("enter the marks obtained"); 
scanf("%d",&marks); 
if(marks > 95){ 
printf("topper\n"); 
} 
else if(marks > 90){  
printf("excellent\n"); 
} 
else{ 
printf("good\n"); 
} 
printf("Thank You"); 
return 0; 
} 
