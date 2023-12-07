/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlenprot.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/17 16:42:16 by rmaes         #+#    #+#                 */
/*   Updated: 2023/12/07 13:36:45 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// returns a len of 0 instead of segfaulting when recieveing a null string
size_t	ft_strlenprot(const char *s)
{
	int	a;

	a = 0;
	if (s)
		while (s[a])
			a++;
	return (a);
}
