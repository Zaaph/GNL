/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 16:49:52 by emihoubi          #+#    #+#             */
/*   Updated: 2016/01/13 16:51:32 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_inttablen(int *tab)
{
	int i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}
