#include <stdio.h>
#include <stdlib.h>

int strcmp( char *dest, char *src )
{
    int i = 0;

    while( src[i] != '\0' && dest[i] != '\0' )
    {
        if(src[i] != dest[i])
        {
            return src[i] - dest[i];
        }
        i++;
    }
    return src[i] - dest[i];
}

int main(int argc, char* argv[]) 
{
    char a[] = "hello";
    char b[] = "hello2";
    char c[] = "hello";

    int d = strcmp_array( a, b);
    int e = strcmp_array(a,c);

    printf("%d %d\n", d,e);
    return 0;
}
