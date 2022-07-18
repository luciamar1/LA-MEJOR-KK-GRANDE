#include "libft.h"


void *ft_memcpy(void *dest, const void *src, size_t n)
{
    if(dest == 0 && src == 0)
        return(0);
    char *d;

    d = dest;
    while(n)
    {
        *d = *(char*)src;
        src ++;
        d ++;
        n --;
    }
    return(dest);
}
/*
int main () {
  // const char src[50] = "http://www.tutorialspoint.com";
   //char dest[50];
   //strcpy(dest,"Heloooo!!");
   //printf("Before memcpy dest = %s\n", dest);
   
   printf("After memcpy dest = %s\n", memcpy(0, 0, 5));
   
   return(0);
}*/
