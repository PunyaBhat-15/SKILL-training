#include <stdio.h>
int billcalculation(char ward_type,int days){
    int bill=0;
    switch(ward_type){
        case 'G': bill+=1000*days;
                break;
        case 'S': bill+=2000*days;
                break;
        case 'P': bill+=5000*days;
                break;
        default:printf("invalid");
                break;
    }
    return bill;
   

}
int discountcalculation(int amount,int days){
    float discount;
    if(days>7){
        discount=amount*0.05;
    }
    return discount;
}
int main()
{
   char name[20],ward_type;
   int days;
   printf("Enter the Paitent name: ");
   scanf("%s",name); getchar();
   printf("Enter the Ward Type(G/S/P): ");
   scanf("%c",&ward_type);
   printf("Enter the Number of days: ");
   scanf("%d",&days);
   int amount;
   amount=billcalculation(ward_type,days);
   float discount_amount;
   if(days>7){
   discount_amount=discountcalculation(amount,days);
   }
   printf("Paitent name:%s\n",name);
   printf("Bill amount before discount:%d\n",amount);
   printf("Bill amount after discount:%f\n",discount_amount);

    return 0;
}