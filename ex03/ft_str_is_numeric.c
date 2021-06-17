#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if((str[counter] >= 48 && str[counter] <= 57) || str[counter] == 32)
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
	//str = "012346789";
	//str = "0123467     89";
	//str = "";
	//str = "012@456789";
	//str = "$%¨&*()";
	number = ft_str_is_numeric(str);
	printf("number: %d\n", number);
}
