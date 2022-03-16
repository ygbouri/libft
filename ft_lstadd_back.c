/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 05:08:16 by ygbouri           #+#    #+#             */
/*   Updated: 2021/11/27 08:32:42 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*p;

	if (alst)
	{
		if ((*alst) == NULL)
			(*alst) = new;
		else
		{
			p = *alst;
			while (p->next != NULL)
				p = p->next;
			p->next = new;
		}
	}
}
