/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruludag <eruludag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:25:25 by eruludag          #+#    #+#             */
/*   Updated: 2025/10/14 15:08:44 by eruludag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_total_size(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	if (size <= 0)
	{
		total = 1;
	}
	else
	{
		while (i < size)
		{
			total = total + ft_strlen(strs[i]);
			i++;
		}
		total = total + (ft_strlen(sep)) * (size - 1);
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	str = (char *) malloc(sizeof(char) * ft_total_size(size, strs, sep));
	if (str == NULL)
		return (0);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			str[k++] = sep[j++];
		i++;
	}
	str[k] = '\0';
	return (str);
}
