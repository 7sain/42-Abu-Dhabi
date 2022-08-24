/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 19:08:57 by hualhash          #+#    #+#             */
/*   Updated: 2022/08/06 19:49:41 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char	ch;

	if (nbr == -2147483648)
	{
		ft_putnbr(nbr / 10);
		write(1, &"8", 1);
	}
	else if (nbr < 0)
	{
		write(1, &"-", 1);
		ft_putnbr(nbr / (-1));
	}
	else
	{
		if (nbr >= 10)
			ft_putnbr(nbr / 10);
		ch = nbr % 10 + '0';
		write(1, &ch, 1);
	}
}

/*int	main(void)

{
	ft_putnbr(12347);
}*/
