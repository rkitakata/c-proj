#include <stdio.h>
#include <string.h>

int ft_recursive_power(int nb, int power)
{
	int i;

	i = 0;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, (power - 1)));

}

int main()
{
	printf("%i\n", ft_recursive_power(0,0));
	return 0;
}