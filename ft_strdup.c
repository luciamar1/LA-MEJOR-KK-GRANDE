#include "libft.h"

char    *ft_strdup(const char *str)
{
    char *s;
    unsigned int sl;
    

    sl = ft_strlen(str);
    s = malloc(sl * sizeof(char) + 1);
    if (s == NULL)
        return(NULL);
    while (*str)
    {
        *s = *str;
        s ++;
        str ++;
    }
    *s = '\0';
    
    return(s - sl);
}