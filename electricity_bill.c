#include <stdio.h>
 void main(){
    char name[50];
    int units;
    float sc=0, amt, total;

    printf("Enter the name of the consumer : ");
    scanf("%s",name);

    printf("Enter the number of units consumed : ");
    scanf("%d",&units);
    
    if (units<=200)
      amt=0.8*units;

    else if(units>200 && units<=300)
      amt=200*0.8+(units-200)*0.9;

    else
    amt=200*0.8+100*0.9+(units-300);
    if(units>400)
      sc=amt*0.15;

    total=amt+sc+100;
    printf("\nConsumer Name : %s",name);
    printf("\nMeter Charge = %d",100);
    printf("\nThe units consumed = %d",units);
    printf("\nAmount Rs = %.2f",amt);
    printf("\nSurcharge Amount = %.2f",sc);
    printf("\nNET AMOUNT = %.2f",total);
    return;
    }
