/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:13:14 by cbolat            #+#    #+#             */
/*   Updated: 2023/08/20 14:57:55 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	ft_update(t_data *data)
{
	ft_move_player(data);
	ft_render(data, 0.0);
	mlx_clear_window(data->mlx.display_connector, data->mlx.win);
	mlx_put_image_to_window(data->mlx.display_connector,
		data->mlx.win, data->mlx.img.img, 0, 0);
	return (0);
}
