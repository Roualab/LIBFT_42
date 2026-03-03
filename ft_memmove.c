/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabbaou <rlabbaou@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 21:01:02 by rlabbaou          #+#    #+#             */
/*   Updated: 2025/12/21 17:58:55 by rlabbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (d > s) 
	{
		while (n-- > 0)
		{
			d[n] = s[n];
		}
	}
	else 
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

/*#include <stdio.h>
int main()
{
    char src[20] = "abcdef0000ghijk";
    char dest[50] = "1234y6gggggyg6yggy6y";
    ft_memmove(dest+2,src,5 );
    printf("%s\n",dest);

}*/
