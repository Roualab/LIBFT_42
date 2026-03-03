/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabbaou <rlabbaou@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 14:50:12 by rlabbaou          #+#    #+#             */
/*   Updated: 2025/12/20 19:08:15 by rlabbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = s;
	i = 0;
	while (i < n && n > 0)
	{
		*p = (unsigned char)c;
		p++;
		i++;
	}
	return (s);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	char s[50];
	ft_memset(s,'a',30);
	printf("%s\n", s);
	ft_memset(s+3, 'b',3);
	printf("%s\n", s);
	ft_memset(s+7,'r',12);
	printf("%s\n", s);
}*/
