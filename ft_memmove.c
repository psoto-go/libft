/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:00:31 by psoto-go          #+#    #+#             */
/*   Updated: 2021/09/27 13:16:39 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *s1, const void *s2, size_t n){
	
}



int main(int argc, char **argv){
	char tab[100] = "oldstring";
	char tab2[100] = "newstring";
	
    // printf("%s\n", ft_memset(tab, 'a', 2));
    printf("%s", memmove(tab, tab2, 9));
}