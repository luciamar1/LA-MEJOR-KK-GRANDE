#include "libft.h"
#include <ctype.h>

int ft_isalpha(int c)
{
    if((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
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
      if (!!ft_isalpha(i) != !!isalpha(i))
                printf("%d", i);
             printf("MAL");
             printf("%d,%d\n", ft_isalpha(i), isalpha(i));
   i++;
}
    printf("BIEN");
}*/