#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if((str[counter] >= 97 && str[counter] <= 122) || str[counter] == 32)
			counter++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char	*str;
	int		number;
	//TESTES
	//str = "abcdefghij";
	//str = "abcdefgh   ij";
	//str = "";
	//str = "abc@@fghij";
	//str = "$%¨&*()";
	number = ft_str_is_lowercase(str);
	printf("number: %d\n", number);
}
