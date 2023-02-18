/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasripun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:05:47 by sasripun          #+#    #+#             */
/*   Updated: 2023/02/18 22:09:59 by sasripun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}
/*
int	main()
{
	char s[4] = "aaaa";

	ft_bzero(s, 4);
	for(int i = 0; i < 4; i++)
		printf("%c", s[i]);
	return 0;
}
*/
