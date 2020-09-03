

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str, int len)
{
	int		i;
	char	*copy;

	if (!(copy = malloc(sizeof(char) * len + 1)))
		return (0);
	i = 0;
	while (str[i] && i < len)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

int		ft_cmp(char a, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (a == str[i])
			return (1);
		i++;
	}
	return (0);
}

int		get_len(char *str, char *charset)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 0;
	j = ft_strlen(str);
	while (str[i] && i <= j)
	{
		if (!ft_cmp(str[i], charset))
		{
			len++;
			while (!ft_cmp(str[i], charset) && str[i])
			{
				i++;
			}
		}
		i++;
	}
	return (len);
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		i;
	int		j;
	int		len;
	int		head;

	i = 0;
	len = get_len(str, charset);
	if (!(array = (char **)malloc(sizeof(char *) * len + 1)))
		return (0);
	head = 0;
	while (str[i] && i <= ft_strlen(str))
	{
		if (!ft_cmp(str[i], charset))
		{
			j = i;
			while (!ft_cmp(str[i], charset) && str[i])
				i++;
			if (i != j)
				array[head++] = ft_strdup(&str[j], i - j);
		}
		i++;
	}
	array[head] = 0;
	return (array);
}
