#include<stdio.h>
struct student{
    char usn[11],name[20];
    int m1,m2,m3;
    float savg;
};
void main(){
    struct student s[20];
    int n,i;
    float cavg=0;
    
    printf("Enter the number of students : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the usn of the student %d : ",i+1);
        scanf("%s",s[i].usn);

        printf("Enter the student %d's name : ",i+1);
        scanf("%s",s[i].name);

        printf("Enter Student %d's marks : ",i+1);
        scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);

        s[i].savg=(s[i].m1+s[i].m2+s[i].m3)/3.0;
        cavg+=s[i].savg;
    }
    cavg=cavg/n;
    for(i=0;i<n;i++){
        if(s[i].savg>=cavg)
        printf("Student %s's marks%f are above the class average%f",s[i].name,s[i].savg,cavg);
        else
        printf("Student %s's marks%f are below the class average%f",s[i].name,s[i].savg,cavg);
    }

}
