/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/17 16:42:16 by rmaes         #+#    #+#                 */
/*   Updated: 2023/12/07 13:37:07 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

//segfaults when recieving a null string because the subject made me
size_t	ft_strlen(const char *s)
{
	int	a;

	a = 0;
	while (s[a])
		a++;
	return (a);
}
