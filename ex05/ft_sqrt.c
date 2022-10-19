/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:51:17 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/19 10:10:55 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_ROOT 46341

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= FT_ROOT)
	{
		if (i * i == nb)
			return (i);
		i += 1;
	}
	return (0);
}
