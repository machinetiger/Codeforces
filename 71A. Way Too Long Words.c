#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    int i, length, n, j, p;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s",&s);
        length = strlen(s);

        if(length > 10)
            printf("%c%d%c\n",s[0],length-2,s[length-1]);
        else
            printf("%s\n",s);
    }
    return 0;
}
