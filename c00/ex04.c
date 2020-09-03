#include <unistd.h>

char ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void ft_is_negative(int n)
{
    char c;

    if (n < 0)
    {
        c = 'N';
        ft_putchar(c);
    }
    else 
    {
        c = 'P';
        ft_putchar(c);
    }
}

char  main(void)
{
    ft_is_negative()
    return (0);
}



