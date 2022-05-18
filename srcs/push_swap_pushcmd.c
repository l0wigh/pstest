/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_pushcmd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomathi <thomathi@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 23:21:44 by thomathi          #+#    #+#             */
/*   Updated: 2022/05/18 13:53:47 by thomathi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *stack, int element)
{
	int taille;

	taille = stack->taille;
	stack->taille = taille + 1;
	if (taille == 0)
	{
		stack->elements[0] = element;
		return ;
	}
	while (taille >= 0)
	{
		stack->elements[taille + 1] = stack->elements[taille];
		taille--;
	}
	stack->elements[0] = element;
	return ;
}

void	pusha(t_stack *stacka, t_stack *stackb)
{
	if (stackb->taille > 0)
	{
		push(stacka, stackb->elements[0]);
		ft_printf("1 : %d\n", stackb->taille);
		stackb->taille--;
		ft_printf("2 : %d\n", stackb->taille);
		if (stackb->taille > 0)
		{
			ft_memmove(stackb->elements, stackb->elements + 1, stackb->taille * sizeof(int));
		}
		ft_printf("3 : %d\n", stackb->taille);
	}
	ft_printf("pa\n");
}

void	pushb(t_stack *stacka, t_stack *stackb)
{
	if (stacka->taille > 0)
	{
		push(stackb, stacka->elements[0]);
		stacka->taille--;
		if (stacka->taille > 0)
		{
			ft_memmove(stacka->elements, stacka->elements + 1, stacka->taille * sizeof(int));
		}
	}
	ft_printf("pb\n");
}
