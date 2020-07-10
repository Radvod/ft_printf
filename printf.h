/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgalazza <hgalazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 13:54:34 by hgalazza          #+#    #+#             */
/*   Updated: 2020/07/10 17:18:29 by hgalazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft/libft.h"

typedef struct s_flags
{
	char		sharp; //флаг #
	char		minus; //флаг -
	char		plus; //флаг +
	char		space; //флаг пробел
	char		nul; //флаг ноль
	int			width; //Ширина цифрой
	int			prec; //точность цифрой
	char		fill; //символ для заполнения пустоты (ноль или пробел)
	int			length; //длина всех флагов для пропуска в основной функции
	char		l_flag; //модификатор l. 1 для l и 2 для ll
	char		h_flag; //модификатор h. 1 для h и 2 для hh
	char		L_flag; // модификатор L
	char		spec;	//тип преобразования
}	t_flags;

t_flags work_spec(const char *str);
void	ft_strupper(char *str);
char	*ft_addch(char *str, char ch);
char	*ft_itoa_unsigned(size_t nbr);
char	*ft_itoa_long(long nbr);
char	*ft_itoa_base_unsigned(size_t nbr, int base);
char	*ft_itoa_base(unsigned int nbr, int base);
char	*ft_ftoa_long(long double nbr, unsigned int precision);
char	*ft_ftoa(double nbr, unsigned int precision);
void	ft_swap(char *c1, char *c2);
char *digit_work(char *arg, t_flags flags, char spec);
char *work_variable(t_flags *flags, va_list *ap);
int		putstr_for_null_char(char *s);
char	*ft_str_un(char *s1, char *s2, int i);
void ft_mod(t_flags *flags, const char *str);
void	ft_flags(t_flags *flags, const char *str);
char *work_s_c(t_flags *flags, va_list *ap);
char *str_work(char *arg, t_flags flags);
int	ft_printf(const char *str, ...);


#endif
