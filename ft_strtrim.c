#include "libft.h"

char    *ft_strtrim(char const *s, char const *to_find)
{
	int l;
	if (!s || !to_find)
		return (NULL);
	while (*s && ft_strchr(to_find, *s))
		s ++;
	l = ft_strlen(s);
	while (l && ft_strchr(to_find, s[l]))
		l --;
	return(ft_substr(s, 0, l + 1));
}

// int main(void)
// {
//     printf("%s", ft_strtrim("   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ", "\n"));
//     return(0);
// }
