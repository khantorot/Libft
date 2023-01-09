#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t		i;
	char		*str;

	i = 0;
	if (size + 1 < size)
		size -= 1;
	if (!(str = ft_memalloc(size + 1)))
		return (NULL);
	while (i < size)
		str[i++] = '\0';
	return (str);
}
