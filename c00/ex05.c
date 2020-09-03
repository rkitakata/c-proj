#include <unistd.h>

char ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);

}

void ft_print_comb(void)
{
    char i ; 
    char j;
    char z;
    
    i = '0';
    while (i <= '7')
    { 
        j = i + 1; 
        while (j < '8' )
        {
            z = j + 1;
           while (z <= '9')
           {
               ft_putchar(i);
               ft_putchar(j);
               ft_putchar(z);
               z++
           }
           j++ 
        }
        i++
    }
}

