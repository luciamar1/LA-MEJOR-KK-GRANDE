#include "libft.h"

int ft_tolower(int c)
{
    if ( c >= 'A' && c <= 'Z')
        return (c + 32);
    return (c);
}
/*
int main(void)
{
    char a = ft_toupper('D');
    write(1, &a, 1);
    return (0);
}*/