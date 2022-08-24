/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:47:10 by hualhash          #+#    #+#             */
/*   Updated: 2022/08/06 17:35:45 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_chars(char h)
{
	write(1, &h, 1);
}

void	ft(char one, char two, char three)
{
	while (three <= '9')
	{
		ft_chars(one);
		ft_chars(two);
		ft_chars(three);
		if (one != '7')
		{
			ft_chars(',');
			ft_chars(' ');
		}
		three++;
	}
}

void	ft_print_comb(void)
{
	char	one;
	char	two;
	char	three;

	one = '0';
	while (one <= '7')
	{
		two = one + 1;
		while (two <= '8')
		{
			three = two + 1;
			ft(one, two, three);
			two++;
		}
		one++;
	}
}

/*int	main(void)
{
	ft_print_comb();
}*/
