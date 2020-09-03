#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>


char* ft_strncpy(char *dest, char *src, unsigned int i)
{
	unsigned int j;

	j = 0;
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int main() {


	char test1[256] = "asdfghghghgh";
	char b[256] = "uiopguj";
	//printf("%s\n", strncpy(test1, b, 5));
	printf("%s\n", ft_strncpy(test1, b, 5));
}