int ft_str_is_alpha(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		if (!((str[i] >= '0') && (str[i] <= '9')))
			return (0);
			break;
		i++;
		
	}
	return (1);
}
