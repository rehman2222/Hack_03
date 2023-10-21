#include<stdio.h>

int main(){
    int days;
    int remaining_days = 30;
    double totaldata = 30.0;

    printf("days uesd: ");
    scanf("%d",&days);

    int a = remaining_days - days;
    printf("%d remaining days \n", a);

    double average = totaldata/days;
    
}