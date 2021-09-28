/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 09:37:33 by psoto-go          #+#    #+#             */
/*   Updated: 2021/09/28 14:02:13 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
	unsigned int	count;

	count = 0;

	while(str[count] && str[count] != c)
		count++;

	if(str[count] == (unsigned char)c){
		return (str + count);
	}
	return(0);
}