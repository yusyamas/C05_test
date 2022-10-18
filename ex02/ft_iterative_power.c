/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:57:39 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/18 19:34:06 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ret;

	ret = 1;
	if (power == 0)
		return (ret);
	if (power < 0)
		return (0);
	while (power)
	{
		ret *= nb;
		power--;
	}
	return (ret);
}
