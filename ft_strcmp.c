/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 21:17:29 by amargy            #+#    #+#             */
/*   Updated: 2019/04/27 22:58:13 by amargy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int				s;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char*)s1;
	ss2 = (unsigned char*)s2;
	s = 0;
	while (ss1[s] != '\0' && ss2[s] != '\0' && ss1[s] == ss2[s])
	{
		s++;
	}
	if (ss1[s] == '\0' && ss2[s] == '\0')
	{
		return (0);
	}
	else
	{
		return (ss1[s] - ss2[s]);
	}
}
