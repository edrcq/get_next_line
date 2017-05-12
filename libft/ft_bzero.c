/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erucquoy <erucquoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 19:37:25 by erucquoy          #+#    #+#             */
/*   Updated: 2017/04/12 19:41:22 by erucquoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_bzero_fill(unsigned char *b, size_t p)
{
	b[p] = 0;
}

void			*ft_bzero(void *b, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
		ft_bzero_fill((unsigned char *)b, i++);
	return (b);
}
