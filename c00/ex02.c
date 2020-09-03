void ft_putchr(char c)
{
    write(1,&c,1);
}

void    ft_print_alphabet(void)
{
    char c;

c = 'z';
    while (c >= 'a')
    {
write(1, &c, 1);
c--
    }
}

char main(void)
{
    ft_print_alphabet();
    return (0);
}