#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    int i;
    char *d;

    d = dest; 
    i = 0;
    if (size <= ft_strlen(dest))
        return (ft_strlen(src) + size);    
    if (src == 0)
        return (0);
    else
    {
        while (*d && size--)
            d++;
        while (*src && --size)
            *d++ = *(char*)src++;   
        *d = '\0';
        return (ft_strlen(dest) + ft_strlen(src));
    }
}
/*
int main(void)
{
   
    size_t z;
   size_t x;
   char *d;
   const char *s;

    x =  2;
    d = "1234567";
    s = "ABCDEfghij";
    // d = "hola ";
    printf("s = %s\n", s);
    printf("d = %s\n", d);
    z = ft_strlcat(d, s, x);
    printf("x = %zu\n", x);
    printf("destino = %s\n", d);
    printf("source = %s\n", s);
    printf("el entero que nos devuelve...%lu", z);
    size_t z;

    char *src;
    src = "123";
    char dest[0xF00] = "hola";
    printf("len dest: %zu\n", strlen(dest));
    printf("len src: %zu\n", strlen(src));
    z = strlcat(dest, src, 2);
    printf("len DESPUES dest: %zu\n", strlen(dest));
    printf("len DESPUES src: %zu\n", strlen(src));
    printf("DEST = %s\n", dest);
    printf("sol  = %zu\n", z);
    return(0);
} 
*/