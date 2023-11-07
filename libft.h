#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

int     ft_atoi(char *str);
void    bzero(void *s, size_t n);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memset(void *ptr, int value, size_t num);
char    *ft_strchr(const char *s, int c);
char	*ft_strdup(char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t  ft_strlen(const char *s);
int strncmp(const char *str1, const char *str2, size_t n);
char    *ft_strnstr(const char *haystack, const char *needle,size_t len);
char    *ft_strrchr(const char *s, int c);
int ft_tolower(int c);
int ft_toupper(int c);
int memcmp(const void *s1, const void *s2, size_t n);
#endif