/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruludag <eruludag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 19:18:57 by eruludag          #+#    #+#             */
/*   Updated: 2025/10/15 17:57:39 by eruludag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (c == 1)
				str[i] -= 32;
			c = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			c = 0;
		else
			c = 1;
		i++;
	}
	return (str);
}

#include <stdio.h>
int main()
{
	char str[] = "hi, how are you? 42 words forty-two; fifty+and+one";
	printf("%s", ft_strcapitalize(str));
}
