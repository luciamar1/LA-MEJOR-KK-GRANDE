#include "libft.h"
//#include <stdio.h>
//#include <string.h>


void    *ft_memset(void *b, int c, size_t len)
{
    char* aux = b;
    while (len)
    {
        *aux = (char)c;
        aux++;
        len --;
    }
    return(b);
}
/*
int main (int argc, char **argv)
{
    if (argc == 2)
    {
        argv ++;
        printf("%s", memset(*argv, 61, 5));
    }
    return (0);
}*/