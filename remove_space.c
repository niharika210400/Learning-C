#include<stdio.h>
#include<string.h>
#define SIZE 99
int main()
{
        int N;
        char str[SIZE],*ptr;
        printf("Enter no. of lines:\n");
        scanf("%d",&N);
        getchar();
        for(int i=0;i<N;i++)
        {
                printf("Enter line %d now:\n",i+1);
                scanf("%[^\n]",str);
                getchar();
                ptr=str;
                for(;*ptr!=*(ptr+strlen(str)+1);ptr++)
                {
                        if(*ptr=='\t'||*ptr==' ')
                                continue;
                        printf("%c",*ptr);
                }
                printf("\n");
        }
        return 0;
}
