/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruludag <eruludag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:40:20 by eruludag          #+#    #+#             */
/*   Updated: 2025/10/16 18:58:53 by eruludag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;
	int	size;

	size = max - min;
	i = 0;
	if (min > max)
	{
		*range = NULL;
		return (0);
	}
	array = (int *) malloc((sizeof(int)) * (size));
	while (i < size)
	{
		if (array == NULL)
		{
			*range = NULL;
			return (-1);
		}
		i = 0;
		while (i < size)
			array[i++] = min++;
	}
	*range = array;
	return (i);
}
#include <stdio.h>
int main()
{
	int *range;
	int min = 1;
	int max = 100;
	int result = ft_ultimate_range(&range, min, max);
	int i = 0;
	while (i < max - min)
	{
		printf("%d\n", range[i]);
		i++;
	}
}