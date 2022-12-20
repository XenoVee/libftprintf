/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_realloc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 17:24:43 by rmaes         #+#    #+#                 */
/*   Updated: 2022/12/12 15:39:02 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	char	*ret;
	int		i;

	i = 0;
	ret = malloc(size);
	if (!(ret == NULL))
		ft_memcpy(ret, ptr, size);
	free(ptr);
	return (ret);
}
