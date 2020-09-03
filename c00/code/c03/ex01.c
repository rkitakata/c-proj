#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while ((s1[i] || s2[i]) && (n > 0))
	{
		if (s1[i] > s2[i]) {
			return 1;
			break;
		}
		if(s1[i]<s2[i])
		{
			return -1;
			break;
		}
		i++;
		n--;
	}
	return 0;

}
int main() {

	char a[] = "apple";
	char b[] = "banana";
	char c[] = "Seed";
	char d[] = "";
	char z[] = "z";

	printf("apple and apple\n");
	printf("strncmp : %d\n", strncmp("apple", "apple", 4));
	printf("ft_strncmp : %d\n", ft_strncmp(a, a, 4));
	printf("apple and banana\n");
	printf("strncmp : %d\n", strncmp("apple", "banana" ,4));
	printf("ft_strncmp : %d\n", ft_strncmp(a, b, 4));
	printf("banana and apple\n");
	printf("strncmp : %d\n", strncmp("banana", "apple", 4));
	printf("ft_strncmp : %d\n", ft_strncmp(b, a, 4));
	printf("apple and Seed\n");
	printf("strncmp : %d\n", strncmp("apple", "Seed", 4));
	printf("ft_strncmp : %d\n", ft_strncmp(a, c, 4));
	printf("apple and \n");
	printf("strncmp : %d\n", strncmp("apple", "z",4));
	printf("ft_strncmp : %d\n", ft_strncmp(a, z, 4));
	printf("Null and apple\n");
	printf("strncmp : %d\n", strncmp("", "apple", 0));
	printf("ft_strncmp : %d\n", ft_strncmp(d, a, 0));


}