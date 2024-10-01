#include <unistd.h>
#include <bsd/string.h>
#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	r;

	i = 0;
	while (src[i] != '\0')
		i++;
    r = i;
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	if (size)
		dest[i] = '\0';
	return (r);
}
/*
int main(void)
{
    char dest[100];
    char *src = "adeus";
    int size;

    size = 4;
    printf ("%i\n", ft_strlcpy(dest, src, size));
    printf("%s\n", dest);
    return (0);
}
*/