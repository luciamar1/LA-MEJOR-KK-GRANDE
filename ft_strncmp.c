#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{

        while(*s1 && *s2 && *s1 == *s2 && --n)
        {
            s1 ++;
            s2 ++;
        }
    return((unsigned char)*s1 - (unsigned char)*s2);
}

// int main () {
//    char str1[15];
//    char str2[15];
//    int ret;

//    strcpy(str1, "\\x12\xff\x65\x12\xbd\xde\xad");
//    strcpy(str2, "\x12\x02");

//    ret = strncmp(str1, str2, 6);

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

//    strcpy(s1, "\\x12\xff\x65\x12\xbd\xde\xad");
//    strcpy(s2, "\x12\x02");

//    ret = ft_strncmp(s1, s2, 6);

//    if(r < 0) {
//       printf("str1 < str2");
//    } else if(r > 0) {
//       printf("str1 > str2");
//    } else {
//       printf("str1 = str2");
//    }
   
//    return(0);
// }