/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabbaou <rlabbaou@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 22:50:35 by rlabbaou          #+#    #+#             */
/*   Updated: 2025/12/22 16:04:32 by rlabbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	sign = 1;
	number = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		number = (nptr[i] - '0') + (number * 10);
		i++;
	}
	return (number * sign);
}

/*#include <stdlib.h>
#include <stdio.h>
int main()
{
	printf("%d\n", ft_atoi("    5522"));
	printf("%d\n", ft_atoi("   +5522"));
	printf("%d\n", ft_atoi("  -5522"));
	printf("%d\n", ft_atoi("    -+22"));
	printf("%d\n", ft_atoi("     -22332"));
	printf("%d\n", ft_atoi("   ds  +22.12"));
	printf("%d\n", atoi("      125.2"));
}*/
