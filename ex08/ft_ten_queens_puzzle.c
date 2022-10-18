/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:23:59 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/19 00:15:59 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print_ans(int *ans)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = ans[i] + '0';
		write(1, &c, 1);
		i += 1;
	}
	write(1, "\n", 1);
}

int	check_move(int place, int di, int dj, int board[10][10])
{
	int	i;
	int	j;

	i = place / 10;
	j = place % 10;
	while (1)
	{
		i += di;
		j += dj;
		if ((i < 0 || i > 9) || (j < 0 || j > 9))
			break ;
		if (board[i][j])
			return (0);
	}
	return (1);
}

int	can_queen_move(int board[10][10])
{
	int	i;

	i = 0;
	while (i < 100)
	{
		if (board[i / 10][i % 10])
		{
			if (!check_move(i, 1, 0, board) || !check_move(i, -1, 0, board))
				return (0);
			if (!check_move(i, 0, 1, board) || !check_move(i, 0, -1, board))
				return (0);
			if (!check_move(i, 1, 1, board) || !check_move(i, -1, -1, board))
				return (0);
			if (!check_move(i, -1, 1, board) || !check_move(i, 1, -1, board))
				return (0);
		}
		i += 1;
	}
	return (1);
}

void	place_queen(int depth, int *cnt, int board[10][10], int *ans)
{
	int	i;

	if (depth == 10)
	{
		*cnt += 1;
		print_ans(ans);
		return ;
	}
	i = 0;
	while (i < 10)
	{
		board[i][depth] = 1;
		if (can_queen_move(board))
		{
			ans[depth] = i;
			place_queen(depth + 1, cnt, board, ans);
		}
		board[i][depth] = 0;
		i += 1;
	}
	return ;
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10][10];
	int	ans[10];
	int	cnt;
	int	i;

	i = 0;
	cnt = 0;
	while (i < 100)
	{
		board[i / 10][i % 10] = 0;
		i += 1;
	}
	place_queen(0, &cnt, board, ans);
	return (cnt);
}
