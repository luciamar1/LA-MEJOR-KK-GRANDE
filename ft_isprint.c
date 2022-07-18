#include "libft.h"
#include <ctype.h>

int	ft_isprint(int str)
{
		if (str < 32 || str > 126)
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
                printf("%d\n", i);
             printf("MAL\n");
             printf("%d, %d\n", ft_isprint(i), isprint(i));
   i++;
	}
    printf("BIEN");
}ç*/