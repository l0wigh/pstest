/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomathi <thomathi@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:34:16 by thomathi          #+#    #+#             */
/*   Updated: 2022/05/18 13:56:12 by thomathi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*******************************************************/
/* Useless code here ! REMOVE IT AT THE END OF PROJECT */
/*******************************************************/

void	ps_showstacks(t_stack *stacka, t_stack *stackb)
{
	int	i;
	
	i = 0;
	ft_printf("A : ");
	while (i < stacka->taille)
	{
		ft_printf("| %d ", stacka->elements[i]);
		i++;
	}
	ft_printf("|");
	i = 0;
	ft_printf("\n");
	ft_printf("B : ");
	while (i < stackb->taille)
	{
		ft_printf("| %d ", stackb->elements[i]);
		i++;
	}
	ft_printf("|\n\n");
	return ;
}

int main(int argc, char *argv[])
{
	t_stack *stacka;
	t_stack *stackb;

	if (argc < 2)
	{
		ft_printf("Error\n");
		return (1);
	}
	stacka = ps_createstack(argv, argc);
	stackb = ps_createstack(NULL, 1);
	ft_printf("0 : %d\n", stackb->taille);
	pushb(stacka, stackb);
	pusha(stacka, stackb);
	// ps_showstacks(stacka, stackb);
	ft_printf("%d\n", stackb->taille);
	return (0);
}
