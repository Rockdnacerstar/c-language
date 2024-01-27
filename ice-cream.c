#include<stdio.h>
int main()
{ 
  float price,quantity,total=0.0,discount=0.0,netbill=0.0;
   
   printf("\nenter the ice cream price:");
   scanf("%f",&price);
   
   printf("\nenter the ice cream quantity:");
   scanf("%f",&quantity);
   
   total=price*quantity;
   printf("\ntotal=%f",total);
   
   discount=total*0.15;
   printf("\ndiscount=%f",discount);
   
   netbill=total-discount; 
   printf("\nnet bill=%f",netbill);
     
   
   return 0;
}