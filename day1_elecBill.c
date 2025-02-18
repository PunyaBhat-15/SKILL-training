#include<stdio.h>
int main()
{
    int id;
    char name[200];
    int units;
    printf("enter id\t");
    scanf("%d\t",&id);
    printf("enter name\t");
    scanf("%s\t",name);
    printf("enter units consumed\t");
    scanf("%d\t",&units);
    float base_amt=100.0f;
    float surcharge=0.0f;
    float total_amt=0.0f;
    if(units>100){
        base_amt+=(100.0f*5.0f);
    }
    else{
        base_amt+=(units*5.0f);
    }
    if(units>300){
        base_amt+=(200.0f*7.0f);
    }
    else if(units>=100 && units<300){
        base_amt+=((units-100.0f)*7.0f);
    }
    if(units>300){
        base_amt+=((units-300.0f)*10.0f);
    }
    if(base_amt>1000.0f){
        surcharge=((base_amt/100.0f)*5.0f);
    }
    total_amt=base_amt+surcharge;
    printf("EB BILL DETAILS\n");
    printf("Customer ID:%d",id);
    printf("Customer name:%s",name);
    printf("Units consumed:%d",units);
    printf("Base Bill:%f",base_amt);
    printf("Surcharge:%f",surcharge);
    printf("Total Bill:%f",total_amt);
return 0;

}
