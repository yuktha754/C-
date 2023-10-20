#include<stdio.h>
#include<string.h>
int slen(char s[]){
    int len=0;
    while (s[len])
    len++;
    return(len);
}
void scpy(char d[], char s[]){
    int i=0;
    while (s[i]){
    d[i]=s[i];
    i++;}
}
int scmp(char s1[], char s2[]){
    int i=0;
    while (s1[i]!='\0' && s1[i]==s2[i])
    i++;
    return s1[i]-s2[i];
    
}
void scat(char s1[],char s2[]){
    int i=0,j=0;
    while (s1[i]!='\0')
    i++;
    while (s2[j]!='\0'){
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
    return;
}
int main(){
    char s1[100],s2[100],s3[150];
    int i[]={0,11,12};
    printf("Enter the first string : ");
    scanf("%s",s1);
    printf("Enter the second string : ");
    scanf("%s",s2);

    printf("String length of s1 %d",slen(s1));
    printf("String length of s2 %d",slen(s2));

    if (scmp(s1,s2)==0)
    printf("The strings sre equal");
    else if(scmp(s1,s2)>0)
    printf("String 1 is longer than String 2");
    else
    printf("String 2 is longer");

    scpy(s3,s1);
    scat(s3,s2);
    printf("The Concatenated String is %s: ",s3);
    return 0;
}
