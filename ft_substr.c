#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    if(!s)
        return(NULL);
    char *d;
    unsigned int x;

    x = len;
    printf("%u", start);
    if (start >= ft_strlen(s))
    {
        d = ft_calloc(1,1);
        return (d);
    }
    d = malloc(x * sizeof(char)+1);
    if (d == NULL)
        return (NULL);
    s += start;
    while (len--)
        *d++ = *s++;
    
    *d = 0;
    return(d - x);
}

 int main(void)
{
    char *s = "i just want this part #############";
    //printf("REAL = %d\n", substr(s, 0, 22));
    printf("MIA = %zu\n", ft_strlen(ft_substr(s, 5, 20)));
}