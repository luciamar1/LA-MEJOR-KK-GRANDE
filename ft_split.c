 #include "libft.h"

char *segmpon(const char *s, char c, char *m, int *x)
{
    int i;
    int n;

    i = 0;
    n = 0;
    while (s[i])
    {
        printf("hola");
        while(s[i] != c)
            i ++;
        m = (char *)malloc((i + 1) * sizeof (char));
        if (!m)
            return(NULL);
        m [i + 1 ]  = 0;
        while (i --)
            m[n ++] = s[*x ++];
        printf("%s", m);
    }
    return(m);
}

int pridimensioncount(char const *s, char c)
{
    int n;

    n = 1;
    printf("incredibol");
    while(*s)
    {
        printf("x   ");
        if (*s == c)
        {
            while(*s && *s == c)
                s++;printf("x   ");
            n ++;
        }
        s ++;
    }
    return(n);
}

char    **ft_split(char const *s, char c)
{
    char **m;
    int i;
    int f;
    int x;
    int n;

    n = pridimensioncount(s, c);
    i = 0;
    f = 0;
    x = 0;
    m = (char **)malloc((n + 1) * sizeof(char *));
    if (!m)
        return(NULL);
    m[n + 1] = 0;
    printf("bueno..");
    while (n --)
        segmpon(s, c, m[i ++], &x);
    printf("jo");
    return(m);
}

int main(void)
{
    ft_split("hola que tal", ' ');
    return(0);
}