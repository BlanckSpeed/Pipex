/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 07:25:00 by rodrigo           #+#    #+#             */
/*   Updated: 2024/12/17 08:39:12 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	msg(char *err)
{
	write(2, err, ft_strlen(err));
	return (1);
}

void	msg_error(char *err)
{
	perror(err);
	exit (1);
}
/*
int	main()
{
	// Simulación de un error para demostrar msg_error
	msg_error("Error simulado");

	// Código principal del programa
	write(1, "Programa sin errores\n", 21);

	return 0;
}
*/
