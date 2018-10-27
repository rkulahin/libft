/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkulahin <rkulahin@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 09:48:02 by rkulahin          #+#    #+#             */
/*   Updated: 2018/10/27 20:10:38 by rkulahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

void		*ft_memset(void *dest, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dest, const void *s, size_t n);
void		*ft_memccpy(void *dest, const void *s, int c, size_t n);
void		*ft_memmove(void *dest, const void *s, size_t n);
void		*ft_memchr(const void *arr, int c, size_t n);
int			ft_memcmp(const void *arr1, const void *arr2, size_t n);
size_t		ft_strlen(const char *str);
char		*ft_strdup(const char *str);
char		*ft_strcpy(char *dest, const char *s);
char		*ft_strncpy(char *dest, const char *s, size_t n);
char		*ft_strcat(char *dest, const char *app);
char		*ft_strncat(char *dest, const char *app, size_t n);
size_t		ft_strlcat(char *dest, const char *app, size_t n);
char		*ft_strchr(const char *str, int ch);
char		*ft_strrchr(const char *s, int c);
char		*ft_strstr(const char *strb, const char *stra);
char		*ft_strnstr(const char *strb, const char *stra, size_t n);
int			ft_strcmp(const char *str1, const char *str2);
int			ft_strncmp(const char *arr1, const char *arr2, size_t n);
int			ft_atoi(const char *str);
int			ft_isalpha(int ch);
int			ft_isdigit(int ch);
int			ft_isalnum(int ch);
int			ft_isascii(int ch);
int			ft_isprint(int ch);
int			ft_toupper(int ch);
int			ft_tolower(int ch);
void		*ft_memalloc(size_t size);
void		ft_memdel(char **ap);
char		*ft_strnew(size_t size);
void		ft_strdel(char **as);
void		ft_strclr(char *s);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strequ(char const *s1, char const *s2);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
#endif
