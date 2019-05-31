/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 20:48:22 by amargy            #+#    #+#             */
/*   Updated: 2019/05/15 14:54:53 by amargy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	if (size + 1 == 0)
		return (0);
	if (size > 1)
		size++;
	if (!(str = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	ft_memset(str, '\0', size);
	return (str);
}
