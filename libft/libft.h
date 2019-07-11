/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:58:31 by tmentor           #+#    #+#             */
/*   Updated: 2019/07/11 09:27:26 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			ft_putchar(char c);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl(char const *str);
void			ft_putendl_fd(char const *str, int fd);
void			ft_putstr(char const *str);
void			ft_putstr_fd(const char *str, int fd);
char			*ft_strcat(char *s1, const char *s2);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
char			*ft_strchr(const char *s1, int s2);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strcpy(char *dst, const char *src);
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
size_t			ft_strlen(const char *str);
void			ft_strclr(char *s);
char			*ft_strncat(char *s1, char *s2, size_t n);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strncpy(char *dst, const char *src, size_t n);
char			*ft_strnstr(const char *s1, const char *s2, size_t n);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strtrim(char const *s);
char			*ft_strjoin(char const *s1, char const *s2);
int				ft_strequ(char const *s1, char const *s2);
char			*ft_strrchr(const char *s1, int n);
char			*ft_strstr(const char *s1, const char *s2);
char			**ft_strsplit(char const *s, char c);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strnew(size_t size);
int				ft_tolower(int c);
int				ft_toupper(int c);
void			ft_bzero(void *s, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void	*dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void	*b, int c, size_t len);
void			ft_memdel(void **ap);
void			ft_strdel(char **as);
char			*ft_strdupdel(char **str);
void			*ft_memalloc(size_t size);
void			ft_putnbr(int n);
void			ft_putnbr_fd(int n, int fd);
char			*ft_strdup(const char *src);
int				ft_atoi(const char *str);
char			*ft_itoa(int n);
int				ft_isspace(int c);
int				ft_iswspace(int c);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
char			*ft_strdup(const char *src);
int				ft_wordcount(const char *s, char c);
size_t			ft_wordlen(const char *str, char c);

#endif
