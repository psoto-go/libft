/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:21:21 by psoto-go          #+#    #+#             */
/*   Updated: 2021/09/24 11:21:10 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
int     ft_isalpha(int c)
{
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return(1);
    else
        return(0);
}