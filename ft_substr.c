#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
 	unsigned int	i;
 	unsigned int	s_len;
 	char			*substr;
 
 	if (!s)
 		return (NULL);
 	s_len = ft_strlen(s);
 	if (s_len < start)
 	{
 		if (!(substr = malloc(sizeof(char) * 1)))
 			return (NULL);
 		substr[0] = '\0';
 		return (substr);
 	}
 	if (!(substr = malloc(sizeof(char) * (len + 1))))
 		return (NULL);
 	i = 0;
 	while (i < len)
 	{
 		substr[i] = s[start + i];
 		i++;
 	}
 	substr[i] = '\0';
 	return (substr);
 }

/*{
	char *new_s;
	char *string;
	unsigned int i;
	unsigned int s_size;

	s_size = strlen(s);
	string = (char *)s;
	new_s = malloc(sizeof(char) * s_size + 1);
	if (!new_s)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_s[i] = string[start];
		i++;
		start++;
	}
	new_s[i] = '\0';
	return (new_s);
}

#include <stdio.h>
int main()
{
	const char str[] = "";
	unsigned int start = 12;
	int len;

	printf("%s\n",ft_substr(str, start, sizeof(int) * 11)); 
}*/