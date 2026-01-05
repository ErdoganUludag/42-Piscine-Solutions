/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruludag <eruludag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:13:05 by eruludag          #+#    #+#             */
/*   Updated: 2025/10/16 01:03:16 by eruludag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}


char *strncpy(char *dest, char *str, unsigned int nb)
{
	unsigned int i;

	i = 0;
	while (*str && nb > i)
	{
		dest[i] = src[i];
		i++;
	}
	while (nb > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

