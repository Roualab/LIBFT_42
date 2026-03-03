/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabbaou <rlabbaou@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 20:37:23 by rlabbaou          #+#    #+#             */
/*   Updated: 2025/12/22 15:42:58 by rlabbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if ((unsigned char)s1[i] == (unsigned char)s2[i])
			i++;
		else 
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

/*#include <stdio.h>
int main()
{
printf("%d\n", ft_strncmp("hi there", "hi bye", 3));
printf("%d\n", ft_strncmp("hi there", "hi bye", 5));
printf("%d\n", ft_strncmp("hi there", "Hi bye", 3));
printf("%d\n", ft_strncmp("", "", 3));
}*/
