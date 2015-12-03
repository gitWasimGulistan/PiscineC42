/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:31:11 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/03 18:59:09 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	if ((s1[i] == '\0' && s2[i] != '\0') || (s1[i] != '\0' && s2[i] == '\0'))
		return (1);
	else if (n == 0)
		return (0);
	else
	{
		while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]) && i < n
			&& (i != n - 1))
			i++;
		return (s1[i] - s2[i]);
	}
}