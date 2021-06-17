#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	counter;
	int	src_length;

	src_length = ft_strlen(src);
	counter = 0;
	while (counter <= src_length)
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}

int	main(void)
{
	char	*destiny;
	char	*source;

	source = "Murilo Dutra Alves";
	printf("destiny: %s\n", destiny);
	destiny = calloc(ft_strlen(source), sizeof(char));
	printf("destiny: %s\n", destiny);
	ft_strcpy(destiny, source);
	printf("destiny: %s\n", destiny);
}
