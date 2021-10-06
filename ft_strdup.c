/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:39:12 by psoto-go          #+#    #+#             */
/*   Updated: 2021/10/05 10:53:17 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char			*aux;
	size_t			len;

	len = ft_strlen(src) + 1;
	aux = malloc(len);
	if (aux == NULL)
		return (NULL);
	ft_memcpy(aux, src, len);
	return (aux);
}