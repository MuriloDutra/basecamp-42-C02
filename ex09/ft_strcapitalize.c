#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char str1[] = "alo maluco 42beleza!";
	char str2[] = "ALO MALUCO 42BELEZA!";
	char str3[] = "alo+ma|uco a2beleza!";
	char str4[] = "ALO+MALUCO*a2BELEZA!";
	char str5[] = "^uIv#= =9Hf~2y@F3A)FTzBgF";
	char str6[] = "tsR1|vn_WE}7X6{Vm2vQf(rG}qdnT`1,qH+n";

	printf("str1: %s\n", str1);
	ft_strcapitalize(str1);
	printf("str1_c: %s\n", str1);
	printf("\n");

	printf("str2: %s\n", str2);
	ft_strcapitalize(str2);
	printf("str2_c: %s\n", str2);
	printf("\n");

	printf("str3: %s\n", str3);
	ft_strcapitalize(str3);
	printf("str3_c: %s\n", str3);
	printf("\n");

	printf("str4: %s\n", str4);
	ft_strcapitalize(str4);
	printf("str4_c: %s\n", str4);
	printf("\n");

	printf("str5: %s\n", str5);
	ft_strcapitalize(str5);
	printf("str5_c: %s\n", str5);
	printf("\n");

	printf("str6: %s\n", str6);
	ft_strcapitalize(str6);
	printf("str6_c: %s\n", str6);
	printf("\n");
	return (0);
}

int	find_gap(char letter, int begin_counter_in, int end_counter_in)
{
	int	counter;
	int	gap;

	counter = begin_counter_in;
	while (counter <= end_counter_in)
	{
		if (letter == counter)
		{
			gap = counter - begin_counter_in;
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
			new_char = 65 + find_gap(input, 97, 122);
			str[counter] = new_char;
		}
	}
}

void	turn_all_to_low_case(char *str)
{
	int		counter;
	char	new_char;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 65 && str[counter] <= 90)
		{
			new_char = 97 + find_gap(str[counter], 65, 90);
			str[counter] = new_char;
		}
		counter++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int		counter;
	char	new_char;

	counter = 0;
	turn_all_to_low_case(str);
	while (str[counter] != '\0')
	{
		if (counter > 0)
			handle_second_letter_and_beyond(str, counter);
		else if (str[counter] >= 97 && str[counter] <= 122)
		{
			new_char = 65 + find_gap(str[counter], 97, 122);
			str[counter] = new_char;
		}
		counter++;
	}
	return (str);
}
