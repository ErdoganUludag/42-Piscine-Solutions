/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruludag <eruludag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 21:50:15 by eruludag          #+#    #+#             */
/*   Updated: 2025/10/01 12:49:34 by eruludag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size -1 - i];
		tab[size -1 - i] = temp;
		i++;
	}
}
int main()
{
	int i = 0;
	int tab[] = {1,2,3,4,5};
	ft_rev_int_tab(tab,5);
	while (i < 5)
	{
		printf("%d", tab[i]);
		i++;
	}
}