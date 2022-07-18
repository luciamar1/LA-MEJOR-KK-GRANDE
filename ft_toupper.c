#include "libft.h"

int ft_toupper(int c)
{
    if ( c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}
/*
int main(void)
{
    char a = ft_toupper('D');
    write(1, &a, 1);
    return (0);
}*/