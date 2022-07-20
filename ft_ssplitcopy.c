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
    //printf("%s\n", m);
    return(m);
}

int pridimensioncount(char const *s, char c)
{
    int l;

    l = 0;
    while(*s)
    {
        printf("no llega1");
        if (*s != c)
        {
            l ++;
            while (*s != c)
                s ++;
        }
        s ++;
    }
    printf("               %d                 ", l);
    printf("no llega");
/////////////////////////////////////////////////////////////AQUI SE ME JODE//////////////////////////
    return(l);
}

char    **ft_split(char const *s, char c)
{
    char **m;
    int i;
    int x;
    unsigned int l;

    if (!s || !c )
    {
        m = malloc (8);
        m[0] = NULL;
        return (m);
    }
    printf("bueno..");
    l = pridimensioncount(s, c);
    if (l == 0)
        printf("====NULL");
    i = l;
    x = 0;
    m = (char **)malloc((l + 1) * sizeof(char *));
    if (!m)
        return(NULL);
    m[l + 1] = NULL;
    while (l --)
    {
        *m = pon(s, c, mallocseg(*m, s, c), &x);
        m ++;
    }
    return(m - i);
}

int main(void)
{
    //ft_split("      split       this for   me  !       ", ' ');
    char    **result;

    result = ft_split("    ", ' ');
    printf("\n%s\n", result[0]);
    printf("%s\n", result[1]);
    // printf("%s\n", result[2]);
    // printf("%s\n", result[3]);
    // printf("%s\n", result[4]);

    return(0);
}

// "     split       this for   me  !       "
// "                  olol"
// "olol                     "
//"hola que tal"
