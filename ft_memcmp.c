#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{

        while(*(unsigned char*)s1 == *(unsigned char*)s2 && --n)
        {
            s1 ++;
            s2 ++;
        }
        
    return(*(unsigned char *)s1 - *(unsigned char *)s2);
}

// int main () {
//    char str1[15];
//    char str2[15];
//    int ret;

//    strcpy(str1, "atoms\0\0\0\0");
//    strcpy(str2, "atoms\0abc");

//    ret = memcmp(str1, str2, 8);

//    if(ret < 0) {
//       printf("      str1 < str2");
//    } else if(ret > 0) {
//       printf("      str1 > str2");
//    } else {
//       printf("      str1 = str2");
//    }
//     printf("\nMIA =  ");
//    char s1[15];
//    char s2[15];
//    int r;

//    strcpy(s1, "atoms\0\0\0\0");
//    strcpy(s2, "atoms\0abc");

//    ret = ft_memcmp(s1, s2, 8);

//    if(r < 0) {
//       printf("str1 < str2");
//    } else if(r > 0) {
//       printf("str1 > str2");
//    } else {
//       printf("str1 = str2");
//    }
   
//    return(0);
// }