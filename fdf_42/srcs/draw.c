/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:33:10 by dpunishe          #+#    #+#             */
/*   Updated: 2021/11/07 17:48:50 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ternars(t_coord src, t_coord dst, int *s, int *err)
{
	int	dx;
	int	dy;

	dx = abs(dst.x - src.x);
	dy = abs(dst.y - src.y);
	if (src.x < dst.x)
		s[0] = 1;
	else
		s[0] = -1;
	if (src.y < dst.y)
		s[1] = 1;
	else
		s[1] = -1;
	if (dx > dy)
		err[0] = dx / 2;
	else
		err[0] = -dy / 2;
}

static	void	draw_line(t_fdf *e, t_coord src, t_coord dst)
{
	int	dx;
	int	dy;
	int	s[2];
	int	err[2];

	dx = abs(dst.x - src.x);
	dy = abs(dst.y - src.y);
	ternars(src, dst, s, err);
	while (src.x != dst.x || src.y != dst.y)
	{
		pixel_put(e, src.x, src.y, e->color);
		err[1] = err[0];
		if (err[1] > -dx)
		{
			err[0] -= dy;
			src.x += s[0];
		}
		if (err[1] < dy)
		{
			err[0] += dx;
			src.y += s[1];
		}
	}
}

void	draw_lines(t_fdf *e, int x, int y)
{
	t_coord		p[2];

	p[0].x = e->map[y][x].xp;
	p[0].y = e->map[y][x].yp;
	if (x < e->width - 1)
	{
		p[1].x = e->map[y][x + 1].xp;
		p[1].y = e->map[y][x + 1].yp;
		draw_line(e, p[0], p[1]);
	}
	if (y < e->height - 1)
	{
		p[1].x = e->map[y + 1][x].xp;
		p[1].y = e->map[y + 1][x].yp;
		draw_line(e, p[0], p[1]);
	}
}

void	draw_fdf(t_fdf *e)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	apply_proj(e);
	mlx_clear_window(e->mlx, e->win);
	while (y < e->height)
	{
		while (x < e->width)
		{
			draw_lines(e, x, y);
			x++;
		}
		x = 0;
		y++;
	}
}
