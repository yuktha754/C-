#include<stdio.h>
#include<math.h>
#define PI 3.142
int main(){
    int n,i;
    float x,deg,sum=0,term=0;

    printf("No of terms :");
    scanf("%d",&n);

    printf("Enter the degree : ");
    scanf("%f",&deg);
    x=(deg*PI)/180;
    printf("In radians : %f",x);
    term=x;
    sum=term;

    for(i=3;i<=n;i+=2){
        term=(-term*x*x)/(i*(i-1));
        sum=sum+term;
    }
    printf("\nThe sin(%f) = %f",deg,sum);
    printf("\nIn-Built sin(%f) = %f",deg,sin(x));
    printf("\nUser Function sin(%f) = %f",deg,sum);
}
