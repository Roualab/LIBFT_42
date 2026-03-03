/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabbaou <rlabbaou@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 20:18:04 by rlabbaou          #+#    #+#             */
/*   Updated: 2025/11/25 20:31:01 by rlabbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_isascii(125));
	printf("%d\n", ft_isascii(0));
	printf("%d\n", ft_isascii(190));
	printf("%d\n", ft_isascii(-1));
}*/
