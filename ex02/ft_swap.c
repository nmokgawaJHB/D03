/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmokgawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 16:19:45 by nmokgawa          #+#    #+#             */
/*   Updated: 2020/06/25 12:07:19 by nmokgawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include <stdio.h>

void  ft_swap(int *a, int *b)
{ 
	int p;
	p = *a;
	*a = *b;
	*b = p;
}

