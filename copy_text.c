#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *sfp,*dfp;
    char c;
    /*create two files(text files) i.e, a source file and destination file*/
    /*write some text in the source file*/
    sfp=fopen("C:\\Users\\naiky\\OneDrive\\Desktop\\source.txt","r"); /*enter the source file name*/
    dfp=fopen("C:\\Users\\naiky\\OneDrive\\Desktop\\destination.txt","w");

    if(sfp==NULL||dfp==NULL){
        printf("Doesn't exist.");
        exit(1);
    }
    while ((c = fgetc(sfp)) != EOF){
        fputc(c,dfp);
    }
    printf("Files copied successfully.");
    fclose(sfp);
    fclose(dfp);
    return 0;
}
