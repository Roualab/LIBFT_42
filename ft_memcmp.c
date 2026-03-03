/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabbaou <rlabbaou@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 18:51:08 by rlabbaou          #+#    #+#             */
/*   Updated: 2025/12/04 19:32:46 by rlabbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		else
			i++;
	}
	return (0);
}

/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_memcmp("12345qwer", "12345jkj", 3));
	printf("%d\n", ft_memcmp("12345qwer", "12345jkj", 7));
	printf("%d\n", ft_memcmp("12345qwer", "12345jkj", 0));
}*/
