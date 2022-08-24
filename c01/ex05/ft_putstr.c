/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:07:26 by hualhash          #+#    #+#             */
/*   Updated: 2022/08/07 22:45:28 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	h;

	h = 0;
	while (str[h] != '\0')
	{
		write (1, &str[h], 1);
	h++;
	}
}

/*int	main(void)
{
	printf("Calling ft_putstr(\"AbuDhabi-42\");\n");
	ft_putstr("AbuDhabi-42");
	return (0);
}*/
