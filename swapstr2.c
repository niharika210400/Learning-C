#include<stdio.h>
int main(){
    int i=-1;
    char str[100];
    char rev[100];
    char *strptr = str;
    char *revptr = rev;
    printf("Enter the string:n");
    scanf("%s",str);
    while(*strptr)
    {
        strptr++;
        i++;
    }
    while(i >=0) {
        strptr--;
        *strptr = *revptr;
        revptr++;
        --i;
    }
    printf("nn Reversed string is:%s",rev);
    return 0;
}
