/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruludag <eruludag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:00:55 by eruludag          #+#    #+#             */
/*   Updated: 2025/10/16 18:57:36 by eruludag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
	{
		array = NULL;
		return (0);
	}
	array = (int *) malloc(sizeof(int) * ((max - min)));
	i = 0;
	while (max > min)
	{
		array[i] = min;
		min++;
		i++;
	}
	array[i] = '\0';
	return (array);
}

#include <stdio.h>
int main()
{
	int min;
	int max;
	int *result;

	min = 1;
	max = 10;

	result = ft_range(min, max);

	int i = 0;
	while (i < 9)
	{
		printf("%d", result[i]);
		i++;
	}
}