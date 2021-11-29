#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *new_s;
	unsigned int i;
	unsigned int s_size;

	s_size = ft_strlen(s);
	new_s = (char *)malloc(sizeof(char) * s_size + 1);
	if (!new_s)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_s[i] = s[start];
		i++;
		start++;
	}
	new_s[i] = '\0';
	return (new_s);
}