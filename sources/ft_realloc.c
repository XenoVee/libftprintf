/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_realloc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 17:24:43 by rmaes         #+#    #+#                 */
/*   Updated: 2022/10/19 17:41:14 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../libft.h"

char	*ft_realloc(void *ptr, size_t size)
{
	char	*ret;
	int		i;

	i = 0;
	ret = ft_calloc(1, size);
	if (ret == NULL)
		exit(EXIT_FAILURE);
	ft_memcpy(ret, ptr, size);
	free(ptr);
	return (ret);
}
