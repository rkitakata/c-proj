#include <stdio.h>
#include<string.h>
//#include<stdlib.h>
//#include<time.h>
//#include<conio.h>
//#include <malloc.h>


int ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (nb >= i * i)
	{
		if (i * i == nb)
			return (i);
		else if (i >= 46341)
			return (0);
	i++;
	}
	return (0);
}




int main()
{
	printf("%i\n", ft_sqrt(-4));
	return 0;
}