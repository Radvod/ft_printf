/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgalazza <hgalazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 14:09:22 by hgalazza          #+#    #+#             */
/*   Updated: 2020/07/10 17:23:05 by hgalazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"




int	ft_printf(const char *format, ...)
{
	va_list ap;
	int i;
	char *str;
	t_flags flags;
	i = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format != '%' && *format)
		{
			ft_putchar(*format);
			format++;
			i++;
			continue ;
		}
		if (*format)
		{
			flags = work_spec(++format);
		}
		else
		{
			flags = work_spec(format);
		}
		if (!(str = work_variable(&flags, &ap)))
			continue ;
		format += flags.length;
		if (flags.spec != 'N')
			i += ft_putstr(str);
		else
			i += putstr_for_null_char(str);
		ft_strdel(&str);
	}
	va_end(ap);
	return (i);
}