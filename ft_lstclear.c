/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 03:59:34 by ygbouri           #+#    #+#             */
/*   Updated: 2021/11/28 04:37:19 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	p = NULL;
	if (*lst && del)
	{
		p = (*lst);
		while (p)
		{
			p = (*lst)->next;
			ft_lstdelone((*lst), del);
			(*lst) = p;
		}
		free(*lst);
	}
}
