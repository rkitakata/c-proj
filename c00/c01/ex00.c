void    ft_ft(int *nbr)
{
    *nbr = 42;
    
    
}

int main(void)
{
    int *p;
    int a;
    
    p = &a;
    ft_ft(p);
    printf("%d",  p);
    
}