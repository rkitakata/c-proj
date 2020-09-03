#include <stdio.h>
#include <string.h>

char ft_str_is_alpha(char *str)
{
	int i;
	int a;

	i = 0;
	while(str[i])
	{
		a = 'a';
		while (a <= 'z')
		{
			if ((str[i] >= 'a') && (str[i] <= 'z'))
			{
				str[i] -= 32;
				str[i] = str[i];
			}
			else
			{
				str[i] = str[i];
			}
			a++;
		}
		i++;
	}
	return (*str);
}
int main() {

	char test1[] = "gasAdfass2d";
	char b[256] = "uio pguj";
	//printf("%s\n", strncpy(test1, b, 5));
	ft_str_is_alpha(test1);
	printf("%s\n", test1);
	return 0;
}