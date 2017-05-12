/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erucquoy <erucquoy@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 20:08:14 by erucquoy          #+#    #+#             */
/*   Updated: 2017/05/11 20:08:14 by erucquoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 10000000

# include "libft/libft.h"
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
// # include <sys/types.h> useless
// # include <sys/uio.h> useless
# include <fcntl.h>

int		get_next_line(int const fd, char **line);

#endif