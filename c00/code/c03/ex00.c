#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
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
	}
	return 0;

}
int main() {

	char a[] = "apple";
	char b[] = "banana";
	char c[] = "Seed";
	char d[] = "";

	printf("apple and apple\n");
	printf("strcmp : %d\n", strcmp("apple", "apple"));
	printf("ft_strcmp : %d\n", ft_strcmp(a, a));
	printf("apple and banana\n");
	printf("strcmp : %d\n", strcmp("apple", "banana"));
	printf("ft_strcmp : %d\n", ft_strcmp(a, b));
	printf("banana and apple\n");
	printf("strcmp : %d\n", strcmp("banana", "apple"));
	printf("ft_strcmp : %d\n", ft_strcmp(b, a));
	printf("apple and Seed\n");
	printf("strcmp : %d\n", strcmp("apple", "Seed"));
	printf("ft_strcmp : %d\n", ft_strcmp(a, c));
	printf("apple and Null\n");
	printf("strcmp : %d\n", strcmp("apple", ""));
	printf("ft_strcmp : %d\n", ft_strcmp(a, d));
	printf("Null and apple\n");
	printf("strcmp : %d\n", strcmp("", "apple"));
	printf("ft_strcmp : %d\n", ft_strcmp(d, a));


}