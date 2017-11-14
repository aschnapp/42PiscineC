/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 16:54:54 by aschnapp          #+#    #+#             */
/*   Updated: 2017/10/31 14:13:19 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int accum;

	accum = (*s1 + 0) - (*s2 + 0);
	while (*s1++ && *s2++)
		accum += (*s1 - *s2);
	return (accum);
}
