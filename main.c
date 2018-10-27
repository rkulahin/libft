/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkulahin <rkulahin@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 10:10:48 by rkulahin          #+#    #+#             */
/*   Updated: 2018/10/27 16:38:20 by rkulahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "includes/libft.h"
#include <stdio.h>
#include <ctype.h>
int main()
{
/*
	char str[15] = "1234567890";
	ft_memset(str,'g', 5);
	printf("%s", str);
*/
/*
	char str[15] = "1234567890";
	ft_bzero(str, 5);
	printf("%s", str);
*/
/*
	char str[15] = "1234567890";
    char str1[15] = "ggggggg123";
	int st[] = {1,2,3,4,5,6,0};
	int st1[15] = {};
	ft_memcpy(st1,st,30);
	int i = 0;
	while (i < 4)
	{
		printf("%d\n", st1[i]);
		i++;
	}
    //printf("%s", str1);
	*/
/*
    char str[15] = "1234567890";
    char str1[15] = "";
    ft_memccpy(str1,str,'g',20);
    printf("%s", str1);
	printf("%s", ft_memccpy(str1,str,'g',20));
*/

	unsigned char src[40]="0123456789";
	printf ("%s\n",src);
	ft_memmove (&src[8], &src[8], 20);
	printf ("%s\n",src);
    unsigned char src1[40]="0123456789";
    printf ("%s\n",src1);
    memmove (&src1[8], &src1[8], 20);
    printf ("%s\n",src1);

/*
	unsigned char src[15]="1234567g89g";
	char *sym;
	printf ("%s\n",src);
	sym = ft_memchr (src, 'g', 10);
	if (sym != NULL)
		sym[0]='!';
	printf ("%s\n",src);
*/
/*
	unsigned char src[15]="12345678\0\0";
	unsigned char dst[15]="12345678\0\055";
	printf("%i",memcmp (src, dst, 10));
*/
/*
	char str [20]="0 1	23456789";
	printf ("%lu", strlen(str));
*/
/*
	char str1 [20]="0 1	23456789";
	char *istr1;
	istr1 = ft_strdup (str1);
	printf ("%s", istr1);
	free (istr1);
*/
/*
	char src[1024]="первая cтрока\0вторая строка";
	char dst[10]="";
	ft_strcpy (dst, src);
	printf ("src: %s\n",src);
	printf ("dst: %s\n",dst);
*/
/*
	char src[1024]="42495";
	char dst[40]="111111111111";
	ft_strncpy (dst, src, 5);
	printf ("%s\n",src);
	printf ("%s\n",dst);
*/
/*
	char src[1024]="42495";
	char dst[1024]="1111";
	ft_strcat (dst, src);
	printf ("%s\n",src);
	printf ("%s\n",dst);
*/
/*
	char src[1024]="42495";
	char dst[1024]="1111";
	ft_strncat (dst, src, 2);
	printf ("%s\n",src);
	printf ("%s\n",dst);
*/
/*
	char src[1024]="42495";
	char dst[1024]="1111";
	printf("%lu\n",ft_strlcat (dst, src, 8));
	printf ("%s\n",src);
	printf ("%s\n",dst);
*/
/*
	char src[1024]="42495";
	char *a;
	a = ft_strchr(src, '9');
	if (a == NULL)
		printf("not found");
	else
		printf("%s", a);
*/
/*
	char src[1024]="42949523579523975";
	char *a;
	a = ft_strrchr(src, '\0');
	if (a == NULL)
		printf("not found");
	else
		printf("%s", a);
*/
/*
	const char strA[1024]="dfshfl cdd;w2342lofsdvw";
	const char strB[1024]="lo";
	printf("%s", ft_strstr(strA,strB));
	printf("\n%s", strstr(strA,strB));
*/
/*
    const char strA[1024]="123456789lo";
    const char strB[1024]="lo";
    printf("%s", ft_strnstr(strA,strB, 10));
    printf("\n%s", strnstr(strA,strB, 10));
*/
/*
	const char src[15]="1234567890";
    const char dst[15]="12345678g0";
    printf("%i",ft_strcmp (src, dst));
*/
/*
    const char src[15]="12345678\0\0";
    const char dst[15]="12345678\055";
    printf("%i",ft_strncmp (src, dst, 17));
*/
/*
	const char *src;
	src = "     \f\n\r\v\t2147483648fdfd";
	printf("%s\n", src);
	printf("atoi:\t\t%i\n", atoi(src));
	printf("ft_atoi:\t%i", ft_atoi(src));
*/
/*
	int ch = 258;
	printf("%i\n", isalpha(ch));
	printf("%i\n", ft_isalpha(ch));
*/
/*
    int ch = 57;
    printf("%i\n", isdigit(ch));
    printf("%i\n", ft_isdigit(ch));
*/
/*
    int ch = 58;
    printf("%i\n", ft_isalnum(ch));
    printf("%i\n", isalnum(ch));
*/
/*
	int ch = 127;
    printf("%i\n", ft_isascii(ch));
    printf("%i\n", isascii(ch));
*/
/*
    int ch = 127;
    printf("%i\n", ft_isprint(ch));
    printf("%i\n", isprint(ch));
*/
/*
    int ch = 300;
    printf("%i\n", ft_toupper(ch));
    printf("%i\n", toupper(ch));
*/
/*
	int ch = 'B';
    printf("%i\n", ft_tolower(ch));
    printf("%i\n", tolower(ch));
*/
/*
	size_t i = 10;
	size_t j = 0;
	char *ptr;
	ptr = ft_memalloc(i);
	printf("%s", ptr);
*/
/*
	char **ptr;
	char a = 'h';
	*ptr = &a;
	ft_memdel(ptr);
	printf("%s",*ptr);
*/
}
