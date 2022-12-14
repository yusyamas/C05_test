/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:28:38 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/19 10:53:29 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb >= 1)
	{
		num *= nb;
		nb -= 1;
	}
	return (num);
}
