#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned	int, char))
{
	char	*result;
	size_t	len;

	len = ft_strlen(s);
	result = (char	*)malloc(len + 1);
	if(!result)
		return (0);
	result[len--] = '\0';
	while(len >= 0)
	{
		result[len] = f(len,s[len]);
		len--;
	}
	return (result);
}