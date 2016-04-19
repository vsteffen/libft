/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_prog.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsteffen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/25 16:54:41 by vsteffen          #+#    #+#             */
/*   Updated: 2016/04/19 18:55:15 by vsteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_exit_prog(char *status, char *color, int debug)
{
	ft_colors(color, status);
	if (debug == 0)
		perror("\nperror message ");
	exit(0);
}
