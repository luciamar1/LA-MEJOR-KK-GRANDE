#include "libft.h"

int ft_isdigit(int c)
{
    if(c < '0' || c > '9')
        return (0);
    return (1);
}
/*
int main(void)
{
    int i;
 
   i = -1;
   while (i < 530)
   {
        if (!!ft_isprint(i) != !! isprint(i))
                printf("%d", i);
        printf("MAL");
        printf("%d,%d\n", ft_isprint(i), isprint(i));
        i++;
    }   
    printf("BIEN");
    return(0);
}
*/