/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_absvalue.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 16:54:22 by emihoubi          #+#    #+#             */
/*   Updated: 2016/01/13 16:56:07 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_absvalue(int x)
{
	if (x < 0)
		x = -x;
	return (x);
}
