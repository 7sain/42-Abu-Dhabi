/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:40:51 by hualhash          #+#    #+#             */
/*   Updated: 2022/08/06 19:48:52 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char one)
{
	write(1, &one, 1);
}

void	ft_print_comb2(void)
{
	int	one;
	int	two;

	one = -1;
	while (one++ < 98)
	{
		two = one;
		while (two++ < 99)
		{
			ft_putchar((one / 10) + '0');
			ft_putchar((one % 10) + '0');
			ft_putchar(' ');
			ft_putchar((two / 10) + '0');
			ft_putchar((two % 10) + '0');
			if (one != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

/*int	main(void)
			{
	ft_print_comb2();
}*/
