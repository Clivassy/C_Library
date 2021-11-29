#include "libft.h"

int			ft_check_c(char *str, char c, int index)
{
	while(index >= 0)
	{
		if (c == str[index])
			return(1);
		index--;
	}
	return (0);
}

int		count_words(char *str)
{
	int	count;
	int i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && ft_isspace(str, str[i], i))
			i++;
		if (str[i] && !ft_isspace(str, str[i], i))
		{
			count++;
			while (str[i] && !ft_isspace(str, str[i], i))
				i++;
		}
	}
	return (count);
}

char	*malloc_word(char *str)
{
	char *word;
	int	i;

	i = 0;
	while (str[i] && !ft_isspace(str, str[i], i))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && !ft_isspace(str, str[i], i))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char 	**ft_split (char const *s, char c)
{
	char **arr; 
	int i; 

	arr = (char **)malloc(sizeof(char *) * (count_words(str) + 1));
	i = 0;
	while (*str)
	{
		while (*str && ft_isspace(str, *str, i))
			str++;
		if (*str && !ft_isspace(str, *str, i))
		{
			arr[i] = malloc_word(str);
			i++;
			while (*str && !ft_isspace(str, *str, i))
				str++;
		}
	}
	arr[i] = NULL;
	return (arr);
}