/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:02:44 by ggomes-v          #+#    #+#             */
/*   Updated: 2024/11/05 16:35:24 by ggomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;

	while (*lst)
	{
		next_node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_node;
	}
	*lst = NULL;
}

void    print_list(t_list *lst)
{
       // t_list *temp = lst;
        while(lst)
        {
                printf("%s -> ", (char *)lst->content);
                lst = lst->next;
        }
        printf("NULL\n");
}


int	main(void)
{
	t_list	*head = ft_lstnew(ft_strdup("1 Elemento"));
	t_list	*novo1 = ft_lstnew(ft_strdup("2 Elemento"));
	t_list	*novo2 = ft_lstnew(ft_strdup("3 Elemento"));

	head->next = novo1;
	novo1->next = novo2;
	
	print_list(head);
	printf("Limpar a Lista...\n");
	ft_lstclear(&head, free);
	
	print_list(head);
	if (!head)
		printf("Lista limpa com sucesso !");
	else
		printf("Erro ao limpar a lista");
	return (0);
}


