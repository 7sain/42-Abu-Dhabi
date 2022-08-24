/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:49:04 by hualhash          #+#    #+#             */
/*   Updated: 2022/08/17 16:11:08 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	h;

	i = 1;
	if (ac > 1)
	{
		while (ac > 1)
		{
			h = 0;
			while (av[i][h] != '\0')
			{
				write(1, &av[i][h], 1);
				h++;
			}
			write (1, "\n", 1);
			i++;
			ac--;
		}
	}
	return (0);
}
