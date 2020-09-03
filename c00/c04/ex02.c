#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
  write(1, &c, 1);
}
void    ft_putnbr(int nb)
{
        if (nb == -2147483648)
        {
          ft_putchar('-');
          ft_putchar('2');
          return ft_putnbr(147483648);

        }
        if (nb < 0)
        {
                ft_putchar('-');
                nb = nb * (-1);
        }
        if (nb > 9)
        {
                ft_putnbr(nb / 10);
                ft_putnbr(nb % 10);
        }
        else
        {
                ft_putchar(nb + '0');
        }
}

int   main(void)
{
  ft_putnbr(10);
  printf("\n");
  ft_putnbr(-10);
  printf("\n");
  ft_putnbr(2147483647);
  printf("\n");
  ft_putnbr(-2147483648);
}