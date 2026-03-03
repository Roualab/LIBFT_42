/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabbaou <rlabbaou@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 16:18:43 by rlabbaou          #+#    #+#             */
/*   Updated: 2025/12/22 19:05:16 by rlabbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	s_len;
	size_t	i;

	i = 0;
	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > s_len)
		return (ft_strdup("")); 
	if ((s_len - start) < len)
		len = s_len - start;
	subs = (char *)malloc(sizeof(char) * (len + 1));
	if (!subs)
		return (NULL);
	while (i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[len] = '\0';
	return (subs);
}

/*#include <stdio.h>
int main()
{
	printf("%s\n", ft_substr("HelloTHere", 3, 5));
	printf("%s\n", ft_substr("HelloTHere", 2, 20));
	printf("%s\n", ft_substr("HelloTHere", 3, 0));
	printf("%s\n", ft_substr("hey", 1, 5));
	printf("%s\n", ft_substr("hey", 0, 0));


}*/
