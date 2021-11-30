/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 21:10:54 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/16 18:35:49 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		count;

	count = 0;
	if (!lst)
		return (0);
	ptr = lst;
	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
/*int main()
{
	t_list	*head = NULL;
	t_list *node1 = NULL;
	t_list	*node2 = NULL;

	char *str = ft_strdup("first");
	char *str1 = ft_strdup("second");
	char *str2 = ft_strdup("third");

	head = ft_lstnew(str);
	node1 = ft_lstnew(str1);
	node2 = ft_lstnew(str2);

	head->next = node1;
	node1->next = node2;
	node2->next = NULL;

	int i;
	i = ft_lstsize(head);
		printf("%d\n", i);
}*/
