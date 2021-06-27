/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <jlensing@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/22 14:36:18 by jlensing      #+#    #+#                 */
/*   Updated: 2021/02/24 13:53:39 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen_util(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}