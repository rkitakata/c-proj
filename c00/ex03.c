void ft_putchr(char c)
{
    write(1,&c,1);
}

void ft_print_number(void)
{
    char c;
    c = '0';
    while (c <= '9')
    {
        ft_putchr(c);
        c++;
    }
}

int main(void)
{
    ft_print_number();
    return (0);
}