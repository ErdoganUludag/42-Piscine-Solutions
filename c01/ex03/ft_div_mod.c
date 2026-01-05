/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruludag <eruludag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 18:43:27 by eruludag          #+#    #+#             */
/*   Updated: 2025/10/01 13:39:40 by eruludag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{	
	if (b != 0)
	{
		*div = (a / b);
		*mod = (a % b);
	}
}
int main()
{
	int a = 10;
	int b = 5;
	int *div = &a;
	int *mod = &b;
	ft_div_mod(a,b,div,mod);
	
}