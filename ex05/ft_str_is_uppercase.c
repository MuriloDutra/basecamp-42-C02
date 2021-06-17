#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if((str[counter] >= 65 && str[counter] <= 90) || str[counter] == 32)
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
	//str = "ABCDEFGH";
	//str = "ABCDEFGH   IJ";
	//str = "";
	//str = "ABCDEFGH@@IJ";
	//str = "$%¨&*()";
	number = ft_str_is_uppercase(str);
	printf("number: %d\n", number);
}
