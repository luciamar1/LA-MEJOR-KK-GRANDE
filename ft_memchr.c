#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    while (*(char *)s && --n)
    {
        if (*(char *)s == c)
            return((void *) s);
        s++;
    }
    if (c == 0)
        return((void *) s);
    return (NULL);
}