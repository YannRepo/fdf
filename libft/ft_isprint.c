/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybellot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:37:11 by ybellot           #+#    #+#             */
/*   Updated: 2021/12/01 17:57:21 by ybellot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (1);
	else if (ch >= 'A' && ch <= 'Z')
		return (1);
	else if (ch >= '0' && ch <= '9')
		return (1);
	else if (ch == 32)
		return (1);
	else if (ch > 32 && ch < 127)
		return (1);
	else
		return (0);
}
