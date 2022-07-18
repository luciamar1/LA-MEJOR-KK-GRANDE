#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t z;

    
    if(dstsize ==0)
        {    
            if((src == 0 || dst == 0) && dstsize == 0)
                return(0);
            return(ft_strlen(src));
        }
    z = --dstsize;
    while (src[z - dstsize] && dstsize)
    {
        dst[z - dstsize] = src[z - dstsize];
        dstsize --;
    }
    dst[z - dstsize]= '\0';
    z = ft_strlen(src);
    return(z);
}


// int main(void)
// {
//     char *s;
//     char *d;
//     size_t z;
//     size_t x;

//     d = "kjk";
//     s = "";
//     x = 0;
//     // a = "hola ";
//     printf("s = %s\n", s);
//     printf("x = %zu\n", x);
//     printf("d = %s\n", d);
//     z = strlcpy(d, s, x);
//     printf("destino = %s\n", d);
//     printf("source = %s\n", s);
//     printf("el entero que nos devuelve...%lu", z);
// }
