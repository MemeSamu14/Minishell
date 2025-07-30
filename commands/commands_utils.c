/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:04 by sfiorini          #+#    #+#             */
/*   Updated: 2025/05/30 10:38:25 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	clear_the_path(t_program *shell)
{
	char	*tmp;

	tmp = ft_strdup(shell->mtx_line[0]);
	free(shell->mtx_line[0]);
	shell->mtx_line[0] = remove_couple_quotes(tmp);
	free(tmp);
}
