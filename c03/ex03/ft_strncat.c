/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruludag <eruludag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 21:55:41 by eruludag          #+#    #+#             */
/*   Updated: 2025/10/09 14:52:46 by eruludag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*dest_start;
	unsigned int	i;

	dest_start = dest;
	while (*dest != '\0')
		dest++;
	i = 0;
	while (i < nb && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (dest_start);
}
#include <stdio.h>
int main()
{
	char src[] = "yaman";
	char dest[] = " kaan";
	printf("%s", ft_strncat(dest,src,3));
}