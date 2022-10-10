#include <stdio.h>
#include <math.h>

int main(){

    int unit;
    int addCharge= 40;
    float billAmount=0;
    float tax;

    printf("Enter the Unit:");
    scanf("%d",&unit);

    if(unit<=100){
        billAmount = (3.50*unit);
    }else if(unit<=200){
        billAmount= (350+(unit-100)*4);
    }else if(unit<=500){
        billAmount = (350+400+((unit-200)*5));
    }else{
        billAmount = (350+400+1500+(unit -500)*8);
    }

    tax = ((billAmount+addCharge)*12)/100;
    
    
    printf("\n Total Charge in Units = %.2f/-\n",billAmount);
    printf("\nAdditional Charge = %d/-\n",addCharge);
    printf("\nTax Charge = %.2f/-\n",tax);
    printf("\nTotal Amount to be paid = %.2f/-\n",(billAmount+addCharge+tax));

    return 0;
}

