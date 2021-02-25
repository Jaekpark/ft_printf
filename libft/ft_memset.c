/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 21:20:40 by jaekpark          #+#    #+#             */
/*   Updated: 2020/10/06 21:23:57 by jaekpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *ptr, int val, size_t num)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)ptr;
	while (num--)
		*tmp++ = (unsigned char)val;
	return (ptr);
}
