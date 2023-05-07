#include<stdio.h>
int main(){

    int sum,sub,mul,div,modValue,num1=50,num2=10;

    printf("Enter First Value=");
    scanf("%lf",&num1);
    printf("Enter Second Value=");
    scanf("%lf",&num2);
    sum=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=num1/num2;
    modValue=num1%num2;
    printf("sum is=%.3lf\n",sum);
    printf("sub is=%.3lf\n",sub);
    printf("Mul is=%.3lf\n",mul);
    printf("Div is=%.3lf\n",div);
     printf("Mod is=%.3lf\n",div);


return 0;
}