#include<stdio.h>
  int main(){
    int a[10][10],b[10][10],c[10][10],i,j,k,m,n,p,q;
    printf("Enter the number of elements in Matrix A : ");
    scanf("%d%d",&m,&n);

    printf("Enter the number of elements in Matrix B : ");
    scanf("%d%d",&p,&q);
    if (n!=p)
    printf("Cannot be multiplied");

    else{
        printf("Enter the elements of Matrix A : ");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%d",&a[i][j]);
            }
        }

        printf("Enter the elements of Matrix B : ");
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                scanf("%d",&b[i][j]);
            }
        }

        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                c[i][j]=0;
                for(k=0;k<n;k++){
                    c[i][j]+=(a[i][k]*b[k][j]);
                }
            }
        }
        printf("The result of multipliaction is : ");
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
               printf("%d\t",c[i][j]);
               printf("\n"); 
            }
            }
    
    }
    return 0;
  }
