#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    char *s;

    s = malloc(count * size);
    if (s == NULL)
        return(NULL);
    ft_bzero(s, count * size);
    return(s);
}