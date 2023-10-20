#include<stdio.h>
int main(){
    int n,i,a[20],t,j;
    printf("No of ele ");
    scanf("%d",&n);
    printf("Enter ele ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for (i=0;i<n-1;i++){
        for (j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
            t=a[j];;
            a[j]=a[j+1];
            a[j+1]=t;}
        }
    }
    printf("SORTED ARRAY : ");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);

}
