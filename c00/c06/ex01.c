#include <unistd.h>

intft_putchar(char c)
{
write(1, &c, 1);
return (0);
}

intmain(int agu, char **agv)
{
int i;
int j;

i = 1;
while (i < agu)
{
j = 0;
while (agv[i][j])
{
ft_putchar(agv[i][j]);
j++;
}
i++;
ft_putchar('\n');
}
return (0);
}