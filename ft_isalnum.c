/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabbaou <rlabbaou@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 20:09:51 by rlabbaou          #+#    #+#             */
/*   Updated: 2025/11/25 20:17:27 by rlabbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 48) && (c <= 57)) || ((c >= 65) && (c <= 90)) 
		|| ((c >= 97) && (c <= 122)))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int main()
{

	printf("%d", ft_isalnum(55));
	printf("%d", ft_isalnum(89));
	printf("%d", ft_isalnum(10));
	printf("%d", ft_isalnum(0));
}*/
