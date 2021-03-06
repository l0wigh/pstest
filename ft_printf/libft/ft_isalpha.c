/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomathi <thomathi@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:27:21 by thomathi          #+#    #+#             */
/*   Updated: 2022/02/24 13:14:59 by thomathi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int x)
{
	if ('a' <= x && x <= 'z')
	{
		return (1);
	}
	else if ('A' <= x && x <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
