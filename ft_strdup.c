/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlendine <rlendine@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 07:28:31 by rodrigo           #+#    #+#             */
/*   Updated: 2024/12/21 07:33:03 by rlendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*ft_strdup(const char *s1)
{
	char	*dp;
	int		i;

	i = 0;
	dp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!dp)
		return (0);
	while (s1[i])
	{
		dp[i] = s1[i];
		i++;
	}
	dp[i] = '\0';
	return (dp);
}
/*
int main() {
    char *original = "Hola, Mundo!";
    char *copia = ft_strdup(original);

    if (copia) {
        printf("Original: %s\n", original);
        printf("Copia: %s\n", copia);
        free(copia);  // Liberar memoria
    } else {
        printf("Error al duplicar la cadena.\n");
    }

    return 0;
}
*/