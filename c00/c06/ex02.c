
#include <unistd.h>

intft_putchar(char c)
{
write(1, &c, 1);
return (0);
}

int main(int argc, char **argv)
{
int i;

while (1 < argc)
{
i = 0;
while (argv[argc - 1][i])
{
ft_putchar(argv[argc - 1][i]);
i++;
}
argc--;
ft_putchar('\n');
}
return (0);
}