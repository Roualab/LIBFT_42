/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabbaou <rlabbaou@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 20:39:07 by rlabbaou          #+#    #+#             */
/*   Updated: 2025/11/25 20:46:41 by rlabbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int	main()
{
	printf("%d", ft_isprint(50));
	printf("%d", ft_isprint(128));
	printf("%d", ft_isprint(20));

}*/
