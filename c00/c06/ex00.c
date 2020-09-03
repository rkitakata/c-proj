#include <unistd.h>

intft_putchar(char c)
{
write(1, &c, 1);
return (0);
}

intmain(int argc, char *argv[])
{
int i;

i = 0;
if (argc > 0)
{
while (argv[0][i])
{
ft_putchar(argv[0][i]);
i++;
}
ft_putchar('\n');
}
return (0);
}