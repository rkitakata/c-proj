#include <stdio.h>
#include <string.h>

char* ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int j;

	if (!(dest || src))
		return (dest);
	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (i < nb && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int main() {

	char a[100] = "apple";
	char b[] = "banana";
	char c[] = "Seed";
	char d[] = "";
	char z[] = "z";

	printf("apple and apple\n");
	strncat(a, b, 3);
	printf("strcat : %s\n", a);
	ft_strncat(a, b, 3);
	printf("ft_strcat : %s\n", a);

}