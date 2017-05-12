/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erucquoy <erucquoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 13:39:16 by erucquoy          #+#    #+#             */
/*   Updated: 2017/04/12 18:17:41 by erucquoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	int c;

	c = 0;
	while (src[c] != 0)
	{
		dst[c] = src[c];
		c++;
	}
	dst[c] = 0;
	return (dst);
}
