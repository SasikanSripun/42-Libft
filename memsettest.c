/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memsettest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasripun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:41:26 by sasripun          #+#    #+#             */
/*   Updated: 2023/02/18 18:48:57 by sasripun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void *memset(void *ptr, int value, size_t num) {
    unsigned char *p = ptr;
    unsigned char v = value;
    size_t i = 0;

    while (i < num) {
        *p++ = v;
        i++;
    }

    return ptr;
}

int	main(void)
{
	char *s = "hello";

	memset(s, 'a', 3);
	printf("%s", s);
}
