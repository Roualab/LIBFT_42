/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabbaou <rlabbaou@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:26:33 by rlabbaou          #+#    #+#             */
/*   Updated: 2025/12/04 18:31:22 by rlabbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		else
		{
			str++;
			i++;
		}
	}
	return (NULL);
}

/*#include <stdio.h>
int main()
{
	printf("%s\n", (char *)ft_memchr("Hi There, how are you?", 101, 9));
	printf("%s\n", (char *)ft_memchr("Hi There, how are you?", 104, 15));
	printf("%s\n", (char *)ft_memchr("Hi There, how are you?", -56, 9));
}*/
