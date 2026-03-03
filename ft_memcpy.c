/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabbaou <rlabbaou@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:25:18 by rlabbaou          #+#    #+#             */
/*   Updated: 2025/12/21 18:29:41 by rlabbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL); 
	while (i < n) 
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
int main()
{
	char src[20] = "abcdef0000ghijk";
	char dest[50] = "1234y6gggggyg6yggy6y";
	ft_memcpy(dest+2,src,5 );
	printf("%s\n",dest);

}*/
