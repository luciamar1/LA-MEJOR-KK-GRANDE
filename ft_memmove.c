#include "libft.h"

void *ft_memmove(void * dest, const void *src, size_t count)
{
    if(dest == 0 && src == 0)
        return(0);

    char *d;
    const char *s;
    size_t z;

    z = count;
    s = src;
    d = dest;
    if (src < dest)
    {
        while(count--)
            d[count] = s[count];
    }

    else
    {
        while(count)
        {
            d[z-count] = s[z-count];
            count --;
        }
    }
    return (dest);
}

/*
int main()
{
    //char b[10] = { 'a', 'b', 'c', 'd', 'e'};
    //write(1, b+2, 1);
    printf("After memmve dest = %s\n", ft_memmove("hoalan", "abcde", 5));
    
    int x = 0;
    while (x < 10)
    {
        printf("%c", b[x]);
        x++;
    }
    return 0;
}*/