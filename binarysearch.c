#include <stdio.h>
int main(){
    int key,left=0,f=0,right,mid,a[20],n,i;
    printf("Enter the number of elements : ");
    scanf("%d",&n);

    printf("Enter the elements in ascending order : ");
    for(i=0;i<=n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the element to be searched : ");
    scanf("%d",&key);
    right=n-1;
    do{
        mid=(left+right)/2;
        if (a[mid]==key){
            f=1;
            break;
        }
        else if (a[mid]<key){
            left=mid+1;
        }
        else
        right=mid-1;
    }while(left<=right);
    if(f==1){
        printf("Element found at location : %d",mid+1);
    }
    else
    printf("Element not found!");
    return 0;

}
