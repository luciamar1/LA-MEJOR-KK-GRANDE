#include "libft.h"
#include "strings.h"


void ft_bzero(void *s , size_t n )
{
    char *a;

    a = s;
    while(n)
    {
        *a = '\0';
        n --;
        a ++;
    }
}
