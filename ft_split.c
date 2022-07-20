/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciamar <luciamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 02:06:19 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/07/20 17:34:09 by luciamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *mallocseg(char *m, const char *s, char c)
{
    int i;

    i = 0;
    while(s[i] && s[i] != c)
        i++;
    m = (char *)malloc((i + 1) * sizeof(char));
    m [i]  = 0;
    if (!m)
        return(NULL);
    return(m);
}

char *pon(const char *s, char c, char *m, int *x)
{
    int n;
 
    n = 0;
    while (s[*x] && s[*x] != c)
        m[n ++] = s[(*x)++];
    //printf("%s\n", m);
    return(m);
}

int pridimensioncount(char const *s, char c)
{
    int n;

    n = 0;
    while (*s)
    {
        //printf("hola");
        if(*s != c)
        {
            l ++;
            printf("jijijij");
            while (*s != c)
                s++;
        }
        s ++;
    }
    return(l);
}

char **mal(char **m)
{
    m = malloc (8);
    m[0] = NULL;
    return (m);
}

char    **ft_split(char const *s, char c)
{
    char **m;
    int i;
    int x;
    int n;

    if (!s || !c)
        return(mal(m));
    n = pridimensioncount(s, c);
    if (n == 0)
        return(mal(m));
    i = n;
    x = 0;
    m = (char **)malloc((n + 1) * sizeof(char *));
    if (!m)
        return(NULL);
    m[n] = NULL;
    while (n --)
    {
        *m = pon(s, c, mallocseg(*m, s, c), &x);
        m ++;
    }
    return(m - i);
}

// int main(void)
// {
//     //ft_split("      split       this for   me  !       ", ' ');
//     char    **result;

//     result = ft_split("      split       this for   me  !       ", ' ');
//     printf("%s\n", result[0]);
//     printf("%s\n", result[1]);
//     printf("%s\n", result[2]);
//     printf("%s\n", result[3]);
//     printf("%s\n", result[4]);

//     return(0);
// }

// "     split       this for   me  !       "
// "                  olol"
// "olol                     "
//"hola que tal"