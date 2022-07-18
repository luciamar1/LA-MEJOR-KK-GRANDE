#include "libft.h"
#include <ctype.h>

int ft_atoi(const char *str)
{
    int c;
    unsigned int x;

    c = 1;
    x = 0;
    while (*str)
    {
        while ((*str >= 9 && *str <= 13) || *str == ' ')
            str++;
        if (*str == '+' || *str == '-' || isalpha(*str))  
            if (*str++ == '-')
                c *= -1;
        while (*str <= '9' && *str >= '0')
            x = x * 10 + (*str++ - '0'); 
        if (x > 0x7fffffff && c == 1)
            return(-1);
        if(x > 0x80000000 && c == -1)
            return (0);
  
        return (c * x);
        str++;
    }
    return (0);
}

// int main(int argc, char **argv)
// {
//     argc = 0;
//     argv ++;
//     printf("REAL = %d\n", atoi(*argv));
//     printf("MIA = %d", ft_atoi(*argv));
// }

// int	ft_atoi(const char *str)
// {
// 	int				minus;
// 	unsigned int	ret;

// 	ret = 0;
// 	minus = 0;
// 	while (*str == 0x20 || *str == 9 || *str == 10
// 		|| *str == 11 || *str == 12 || *str == 13)
// 		str++;
// 	if (*str == '+' || *str == '-')
// 	{
// 		if (*str == '-')
// 			minus++;
// 		str++;
// 	}
// 	while (*str <= '9' && *str >= '0')
// 		ret = ret * 10 + (*str++ - '0');
// 	if (ret > 0x7fffffff && !minus)
// 		return (-1);
// 	if (ret > 2147483648 && minus)
// 		return (0);
// 	if (minus)
// 		ret *= -1;
// 	return (ret);
// }

