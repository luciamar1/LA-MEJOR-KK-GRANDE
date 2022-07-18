     #include "libft.h"

char *mallocseg(char *m, const char *s, char c)
{
    int i;

    i = 0;
    while(s[i] && s[i] != c)
        i++;
    m = (char *)malloc((i + 1) * sizeof(char));
    m [i + 1 ]  = 0;
    if (!m)
        return(NULL);
    return(m);
}

char *pon(const char *s, char c, char *m, int *x)
{
    int i;
    int n;

    i = 0;
    n = 0;
    while(s[*x] && s[*x] == c)
        (*x)++;
    while (s[*x] && s[*x] != c)
        m[n ++] = s[(*x)++];
    printf("\"%s\"\n", m);
    return(m);
}

int pridimensioncount(char const *s, char c)
{
    int n;

    n = 0;
    if (*s != c)
        n ++;
    while(*s)
    {
        if (*s == c)
        {
            while(*s && *s == c)
                s++;
            if (*s )
                n ++;
        }
        s ++;
    }
    if (n == 0)
        n = 1;
    return(n);
}

char    **ft_split(char const *s, char c)
{
    char **m;
    int i;
    int x;
    int n;

    if (!s || !c)
        return(NULL);
    n = pridimensioncount(s, c);
    i = 0;
    x = 0;
    m = (char **)malloc((n + 1) * sizeof(char *));
    if (!m)
        return(NULL);
    m[n + 1] = NULL;
    printf("\nn = %d", n);
    while (n --)
        pon(s, c, mallocseg(m[i++], s, c), &x);
    
    return(m);
}

int main(void)
{
    ft_split(" ", ' ');
    return(0);
}

// "     split       this for   me  !       "
// "                  olol"
// "olol                     "
//"hola que tal"