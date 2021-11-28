#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{

	char	*string;
	int		i;
	int len;

	len = ft_strlen(s);
	if (s)
	{
		string = (char*)malloc(sizeof(char) * len + 1);
		if ((!string))
			return (NULL);
		i = 0;
		while (s[i])
		{
			string[i] = f(i, s[i]);
			++i;
		}
		string[i] = '\0';
		return(string);
	}
	return (NULL);
}