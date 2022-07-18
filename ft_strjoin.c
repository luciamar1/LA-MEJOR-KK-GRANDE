#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    if (!s1 || !s2)
        return(NULL);
    char *s;
    int l;

    l = ft_strlen(s1) + ft_strlen(s2);

    s = malloc(l * sizeof(char) + 1);
    if (s == NULL)
        return (NULL);
    while(*s1)
        *s++ = *s1++;
    while(*s2)
        *s++ = *s2++;
    *s = 0;
    return (s - l);
}

// int main(void)
// {
//     char *s1 = "my favorite animal is";
//     char *s2 = " ";
//     char *s3 = "the nyancat";
//     char *res = ft_strjoin(ft_strjoin(s1, s2), s3);
//     printf("%s\n", res);
// }