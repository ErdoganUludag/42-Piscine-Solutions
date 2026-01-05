/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruludag <eruludag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 20:52:23 by eruludag          #+#    #+#             */
/*   Updated: 2025/10/09 14:49:33 by eruludag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((char)s1[i] - (char)s2[i]);
		}
		else if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
#include <stdio.h>
int main()
{
	char s1[] = "erdogan";
	char s2[] = "erdocan";
	printf("%d",ft_strncmp(s1,s2,5));
}