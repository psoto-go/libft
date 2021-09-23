/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 11:17:34 by psoto-go          #+#    #+#             */
/*   Updated: 2021/09/23 11:48:27 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int     ft_isalnum(int c){
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        return (1);
    else
        return (0);
}