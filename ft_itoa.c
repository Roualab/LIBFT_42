/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabbaou <rlabbaou@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 15:50:02 by rlabbaou          #+#    #+#             */
/*   Updated: 2025/12/22 21:18:52 by rlabbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long n)
{
	int	j;

	j = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -1 * n;
		j = 1;
	}
	while (n > 0)
	{
		n = n / 10;
		j++;
	}
	return (j);
}

char	*ft_itoa(int n)
{
	long	m;
	char	*str;
	int		len;

	m = n;
	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (m < 0)
	{
		m = m * -1;
		str[0] = '-';
	}
	while (m > 0)
	{
		str[--len] = (m % 10) + '0';
		m = m / 10;
	}
	str[ft_len(n)] = '\0';
	return (str);
}

/*#include <limits.h>
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(5300));
	printf("%s\n", ft_itoa(INT_MIN));
	printf("%s\n", ft_itoa(INT_MAX));
	return (0);
}*/
