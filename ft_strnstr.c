#include "libft.h"

// char *ft_strtrim(const char *str, const char *to_find)
// {

// }
#include <unistd.h>
#include <stdio.h>

char *ft_strnstr(const char *s, const char *f, size_t n)
{
    if (*f == 0 || f == s)
        return ((char *)s);
    int lf;

    lf = ft_strlen(f); 
    while(*s && --n)
    {
        if (*s == *f )
        {
            while (*s == *f && --n)
            {
                s++;
                f++;
            }
            if (*f == 0)
                return((char *)s - lf);
            else
                while(*f)
                    f++;
               f -= lf;
        }
        s++;
    }
    return(NULL);
}

// int     main(void)
// {
//         const char *c = "hola que tal deberias de mimir mas";
//         const char *f = "deberias";
//         printf("%s\n", ft_strtrim(f, c));
//         printf("%s\n", strstr(f, c));
//         return(0);
// }