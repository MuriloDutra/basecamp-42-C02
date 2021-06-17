#include <stdio.h>
#include <stdlib.h>

int	find_gap(char letter)
{
	int	counter;
	int	match;

	counter = 97;
	while(counter <= 122)
	{
		if(letter == counter)
		{
			match = counter - 97;
			return (match);
		}
		counter++;
	}
	return(65);
}

char	*ft_strupcase(char *str)
{
	int		counter;
	char	new_char;

	counter = 0;
	while (str[counter] != '\0')
	{
		if(str[counter] >= 97 && str[counter] <= 122)
		{
			new_char = 65 + find_gap(str[counter]);
			str[counter] = new_char;
		}
		counter++;
	}
	return (str);
}

int	main(void)
{
	char str1[] = "abcdefghi";
	char str2[] = "AbcDefGhI";
	char str3[] = "ABCDEFGHI";
	char str4[] = "Murilo Dutra Alvesz";

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	printf("str4: %s\n", str4);
	ft_strupcase(str1);
	ft_strupcase(str2);
	ft_strupcase(str3);
	ft_strupcase(str4);
	printf("\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	printf("str4: %s\n", str4);
	return (0);
}
