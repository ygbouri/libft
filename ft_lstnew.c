/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 06:56:44 by ygbouri           #+#    #+#             */
/*   Updated: 2021/11/24 04:41:57 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*element;

	element = (t_list *)malloc(sizeof(t_list));
	if (!element)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}
