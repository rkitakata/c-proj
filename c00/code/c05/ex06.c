#include <stdio.h>
#include <string.h>



int ft_is_prime(int nb)
{
	long i;

	i = 3;

	if (nb == 2)
		return 1;
	if (nb <= 1 || nb % 2 == 0)
		return 0;
	while (nb > i * i)
	{
		if (nb % i == 0)
			return 0;
		i += 2;
	}
	return 1;
}




int main()
{
	printf("%i\n", ft_is_prime(2147483647));
	return 0;
}