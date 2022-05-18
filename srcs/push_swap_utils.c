/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomathi <thomathi@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:37:38 by thomathi          #+#    #+#             */
/*   Updated: 2022/05/17 14:54:17 by thomathi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_verifyargs(char arguments[])
{
	int	test;
	int	i;

	i = 0;
	while (arguments[i] != '\0')
	{
		test = ft_isdigit(arguments[i]);
		if (test == 0)
			return (test);
		i++;
	}
	return (test);
}

t_stack	*ps_createstack(char *elements[], int taille)
{
	t_stack *stack;
	int		i;
	int		verify;
	int		current;

	i = 1;
	taille--;
	stack = (t_stack*)malloc(sizeof(t_stack));
	stack->taille = taille;
	stack->elements = (int*)malloc(sizeof(int) * taille);
	while (i <= taille)
	{
		verify = ps_verifyargs(elements[i]);
		if (verify == 1)
		{
			current = ft_atoi(elements[i]);
			stack->elements[i - 1] = current;
		}
		else
			return (NULL);
		i++;
	}
	return (stack);
}
