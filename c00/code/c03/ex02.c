#include <stdio.h>
#include <string.h>

char* ft_strcat(char *dest, char *src)
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
	while (src[j])
	{
		dest[i] = src[j];
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
	strcat_s(a, b);
	printf("strcat : %s\n", a);
	ft_strcat(a, b);
	printf("ft_strcat : %s\n", a);

}