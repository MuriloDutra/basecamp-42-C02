#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	counter;
	int	src_length;

	counter = 0;
	while (counter <= n && src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (counter <= n)
	{
		dest[counter] = '\0';
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}

int	main(void)
{
	char			*destiny;
	char			*source;
	unsigned int	size;

	size = 5;
	source = "Murilo Dutra Alves";
	printf("destiny: %s\n", destiny);
	destiny = calloc(size, sizeof(char));
	printf("destiny: %s\n", destiny);
	ft_strncpy(destiny, source, size);
	printf("destiny: %s\n", destiny);
}
