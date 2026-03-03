/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabbaou <rlabbaou@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 19:33:41 by rlabbaou          #+#    #+#             */
/*   Updated: 2025/12/23 16:08:08 by rlabbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		k = 0;
		while (little[k] && big[i + k] && (i + k) < len)
		{
			if (little[k] == big[i + k])
				k++;
			else
				break ;
		}
		if (little[k] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
