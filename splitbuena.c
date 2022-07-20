#include "libft.h"

void *bfree(char **m)
{
    while(*m)
    {
        while (**m)
            free((*m)++);
        free(m++);
    }
    return (NULL);
}

char *mallocseg(char *m, char *s, char c)
{
    int i;

    i = 0;
    while(s[i] && s[i] != c)
        i++;
    m = (char *)malloc((i + 1) * sizeof(char));
    m [i]  = 0;
    if (!m)
        bfree(m);
    return(m);
}

char *pon(const char **s, char c, char *m)
{
    int n;

    n = 0;
    while (**s && **s != c)
    {
        m[n ++] = **s;
        (*s) ++;
    }

    return(m);
}

int pridimensioncount(char const *s, char c)
{
     int l;

    l = 0;
    while(*s)
    {
        if (*s != c)
        {
            l ++;
             while (*s != c)
                s ++;
        }
        s ++;
    }
     //printf("l ================ %d\n", l);
    return(l);
}

char    **ft_split(char const *s, char c)
{
    char **m;
    int p;
    int i;


    p = pridimensioncount(s,c);
    i = p;
    m = (char **)malloc((p + 1) * sizeof(char *));
    if (!m)
        bfree(&m);
    m[p] = NULL;
    if (!s || !c || p == 0)
        return(m);

    while (p --)
    {
        while (*s && *s == c)
            s++;
        *m = pon(&s, c, mallocseg(*m, (char *)s, c));
        m ++;
    }    
    return(m - i);
}

int main(void)
{
    //ft_split("      split       this for   me  !       ", ' ');
    char    **result;

    result = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
     printf("%s\n", result[0]);
     printf("%s\n", result[1]);
     printf("%s\n", result[2]);
     printf("%s\n", result[3]);    
     printf("%s\n", result[4]);
     printf("%s\n", result[5]);
     printf("%s\n", result[6]);
     printf("%s\n", result[7]);
     printf("%s\n", result[8]);
     printf("%s\n", result[9]);
     printf("%s\n", result[10]);
     printf("%s\n", result[11]);
     printf("%s\n", result[12]);
     printf("%s\n", result[13]);


    return(0);
}

// "     split       this for   me  !       "
// "                  olol"
// "olol                     "
//"hola que tal"
