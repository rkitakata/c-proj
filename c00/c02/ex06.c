#include <stdio.h>
#include <string.h>

int ft_str_is_alpha(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		if (!((str[i] >= 32) && (str[i] <= 126)))
			return (0);
		i++;
		
	}
	return (1);
}
int main() {

	char test1[256] = "g2sd2	34";
	char b[256] = "uio pguj";
	//printf("%s\n", strncpy(test1, b, 5));
	printf("%i\n", ft_str_is_alpha(test1));
	return 0;
}