#include <stdio.h>

int	find_gap(char letter)
{
	int	counter;
	int	gap;

	counter = 97;
	while (counter <= 122)
	{
		if (letter == counter)
		{
			gap = counter - 97;
			return (gap);
		}
		counter++;
	}
	return (65);
}

void	handle_second_letter_and_beyond(char *str, int	counter)
{
	char	input;
	char	last;
	char	new_char;

	input = str[counter];
	last = str[counter - 1];
	if (last == 32 || ((last < 65 || last > 90) && (last < 97 || last > 122)))
	{
		if (input != 32
			&& (input >= 97 && input <= 122)
			&& (last < 48 || last > 57)
		)
		{
			new_char = 65 + find_gap(input);
			str[counter] = new_char;
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int		counter;
	char	new_char;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (counter > 0)
			handle_second_letter_and_beyond(str, counter);
		else
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
	char	str1[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("%s\n", str1);
	ft_strcapitalize(str1);
	printf("%s\n", str1);
}
