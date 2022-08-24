/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:38:41 by hualhash          #+#    #+#             */
/*   Updated: 2022/08/18 14:10:52 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	hus;

	i = 0;
	hus = 1;
	if (nb < 0)
		return (0);
	while (++i <= nb)
	{
		hus *= i;
	}
	return (hus);
}
