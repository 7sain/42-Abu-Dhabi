/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:50:55 by hualhash          #+#    #+#             */
/*   Updated: 2022/08/16 16:41:42 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power_recur(int nb, int power, int n)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (n);
	if (power >= 1)
		return (ft_recursive_power_recur(nb, power - 1, n * nb));
	return (0);
}

int	ft_recursive_power(int nb, int power)
{
	return (ft_recursive_power_recur(nb, power, nb));
}
