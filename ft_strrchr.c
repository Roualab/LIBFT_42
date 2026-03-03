/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabbaou <rlabbaou@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 20:15:12 by rlabbaou          #+#    #+#             */
/*   Updated: 2025/12/23 15:34:04 by rlabbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	back;

	i = 0;
	back = ft_strlen(s);
	while (i <= back)
	{
		if (s[back - i] == (char)c)
			return ((char *)s + (back - i));
		else
			i++;
	}
	return (NULL);
}

/*#include <stdio.h>
int main()
{
printf("%s\n", ft_strrchr("hey friend", 101));
printf("%s\n", ft_strrchr("hey friend", 100));
//printf("%s\n", ft_strrchr("hey friend", "\0"));
}*/
