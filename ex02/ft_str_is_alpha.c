#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		counter;
	char	input;

	counter = 0;
	while (str[counter] != '\0')
	{
		input = str[counter];
		if ((input < 65 || input > 90)
			&& (input < 97 || input > 122)
			&& input != 32)
			return (0);
		counter++;
	}
	return (1);
}

int	main(void)
{
	char	*str;
	int		number;
	//TESTES
	//str = "Murilo Dutra Alves";
	//str = "";
	//str = "*&¨%$#";
	//str = "Muril@@@@";
	number = ft_str_is_alpha(str);
	printf("number: %d\n", number);
}
