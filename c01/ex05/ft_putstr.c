/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruludag <eruludag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 19:09:38 by eruludag          #+#    #+#             */
/*   Updated: 2025/10/01 13:28:16 by eruludag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0' )
	{
		write(1, &str[size], 1);
		size++;
	}
}
int main()
{
	char str[] = "alp";
	ft_putstr(str);
}