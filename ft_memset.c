/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasripun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:21:45 by sasripun          #+#    #+#             */
/*   Updated: 2023/02/18 21:22:09 by sasripun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *pt;

	pt = b;
	while(*pt && len > 0)
	{
		*pt = c;
		pt++;
		len--;
	}
	return (b);
}

int	main(void)
{
	char *str;

	str = "hello";
	ft_memset(str, 'a', 5);
	printf("%s",str);
}
