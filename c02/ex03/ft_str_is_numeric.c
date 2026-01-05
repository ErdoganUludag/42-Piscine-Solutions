/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruludag <eruludag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 20:45:07 by eruludag          #+#    #+#             */
/*   Updated: 2025/10/16 01:12:16 by eruludag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}













int ft_strlen(char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}




#include <unistd.h>
int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		int k = 0;
		while(argv[1][k] >= 'a')
		{
			write(1, argv[1][k], 1);
			i++;
		}
		i++;
	}
return (0);
}