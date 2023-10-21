#include<stdio.h>

int main(){
    int days;
    int remaining_days = 30;
    double totaldata = 30.0;

    printf("Days uesd: ");
    scanf("%d",&days);

    int a = remaining_days - days;
    printf("%d remaining days \n", a);

    double average = totaldata/days;
    printf("Average used %lf GB/day \n",average);

    if(average <=0 || days <30 || totaldata <0){
        printf("ERROR:\n");
    }else if(average > totaldata/30.0){
        printf("ERROR: you re exceded today used %lf",totaldata/30.0);
    }else if(average > totaldata/30.0){
        printf("you are below daily usage",totaldata/30.0);
    }else{
        printf("your limit is exced ");

        return 0;
    }
    
}