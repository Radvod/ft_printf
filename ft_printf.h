/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgalazza <hgalazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 13:54:34 by hgalazza          #+#    #+#             */
/*   Updated: 2020/07/14 14:07:03 by hgalazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <ctype.h>
# include "libft/libft.h"

typedef struct	s_flags
{
	char		sharp;
	char		minus;
	char		plus;
	char		space;
	char		nul;
	int			width;
	int			prec;
	char		fill;
	int			length;
	char		l_flag;
	char		h_flag;
	char		bl_flag;
	char		spec;
}				t_flags;

t_flags			work_spec(const char *str);
void			ft_strupper(char *str);
char			*ft_addch(char *str, char ch);
char			*ft_itoa_unsigned(size_t nbr);
char			*ft_itoa_long(long nbr);
char			*ft_itoa_base_unsigned(size_t nbr, int base);
char			*ft_itoa_base(unsigned int nbr, int base);
char			*ft_ftoa_long(long double nbr, unsigned int precision);
char			*ft_ftoa(double nbr, unsigned int precision);
void			ft_swap(char *c1, char *c2);
char			*digit_work(char *arg, t_flags flags, char spec);
char			*work_variable(t_flags *flags, va_list *ap);
int				putstr_for_null_char(char *s);
char			*ft_str_un(char *s1, char *s2, int i);
void			ft_mod(t_flags *flags, const char *str);
void			ft_flags(t_flags *flags, const char *str);
char			*work_s_c(t_flags *flags, va_list *ap);
char			*str_work(char *arg, t_flags flags);

#endif
