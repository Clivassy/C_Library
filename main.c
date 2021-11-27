/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:04:26 by jbatoro           #+#    #+#             */
/*   Updated: 2021/11/26 20:40:09 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


int main()
//ft_isalpha
{
        int    Upcase = 'B';
        int    Lowcase = 'y';
        int    isspace = '\n';

        printf("Ma fonction :\n");
        printf("Upcase -> %d\n", ft_isalpha(Upcase));
        printf("Lowcase -> %d\n", ft_isalpha(Lowcase));
        printf("isspace -> %d\n", ft_isalpha(isspace));

        printf("\n");

        printf("Vraie fonction :\n");
        printf("Upcase -> %d\n", isalpha(Upcase));
        printf("Lowcase-> %d\n", isalpha(Lowcase));
        printf("isspace -> %d\n", isalpha(isspace));
} 

//ft_isdigit 
{
        int    letter = 'B';
        int    number = '4';
        int    isspace = '\n';

        printf("Ma fonction :\n");
        printf("letter -> %d\n", ft_isdigit(letter));
        printf("number -> %d\n", ft_isdigit(number));
        printf("isspace -> %d\n", ft_isdigit(isspace));

        printf("\n");

        printf("Vraie fonction :\n");
        printf("letter -> %d\n", isdigit(letter));
        printf("number -> %d\n", isdigit(number));
        printf("isspace -> %d\n", isdigit(isspace));
}

// ft_isalnum

int main()
{
        char    test1 = 'e';
        char    test2 = '2';
        char    test3 = '\n';

        printf("Ma fonction :\n");
        printf("%d\n", ft_isalnum(test1));
        printf("%d\n", ft_isalnum(test2));
        printf("%d\n", ft_isalnum(test3));

        printf("\n");

        printf("Vraie fonction :\n");
        printf("%d\n", isalnum(test1));
        printf("%d\n", isalnum(test2));
        printf("%d\n", isalnum(test3));
}

// ft_isascii
int main()
{
        char    test1 = 'À';
        char    test2 = '2';
        char    test3 = '\n';

        printf("Ma fonction :\n");
        printf("Non ascii -> %d\n", ft_isascii(test1));
        printf("ascii -> %d\n", ft_isascii(test2));
        printf("ascii -> %d\n", ft_isascii(test3));

        printf("\n");

        printf("Vraie fonction :\n");
        printf("Non ascii -> %d\n", isascii(test1));
        printf("ascii -> %d\n", isascii(test2));
        printf("ascii -> %d\n", isascii(test3));
}

// ft_isprint 
int main()
{
        char    letter = 'B';
        char    number = '9';
        char    isspace = '\n';
        char    space = ' ';

        printf("Ma fonction :\n");
        printf("letter -> %d\n", ft_isprint(letter));
        printf("number -> %d\n", ft_isprint(number));
        printf("isspace -> %d\n", ft_isprint(isspace));
        printf("space -> %d\n", ft_isprint(space));

        printf("\n");

        printf("Vraie fonction :\n");
        printf("letter -> %d\n", isprint(letter));
        printf("number -> %d\n", isprint(number));
        printf("isspace -> %d\n", isprint(isspace));
        printf("space -> %d\n", isprint(space));
}

// ft_strlen
int main()
{
        char s1[] = "yo, comment ca va?";
        char s2[] = "hey";
        char s3[] = "Hola";

        printf("Ma fonction :\n");
        printf("18 -> %ld\n", ft_strlen(s1));
        printf("3 -> %ld\n", ft_strlen(s2));
        printf("4 -> %ld\n", ft_strlen(s3));

        printf("\n");

        printf("Vraie fonction :\n");
        printf("18 -> %ld\n", strlen(s1));
        printf("3 -> %ld\n", strlen(s2));
        printf("4 -> %ld\n", strlen(s3));
}

//ft_memset
int main()
{
        char    len[15];

        ft_memset(len, 'a', sizeof(char) * 5);
        ft_memset(len+5, 'b', sizeof(char) * 5);
        ft_memset(len+10, 'c', sizeof(char) * 5);

        for (int i = 0; i < 15; i++)
                printf("%c", len[i]);
        printf("\n");

        memset(len, 'a', sizeof(char) * 5);
        memset(len+5, 'b', sizeof(char) * 5);
        memset(len+10, 'c', sizeof(char) * 5);
        for (int i = 0; i < 15; i++)
                printf("%c", len[i]);
        printf("\n");
}
//ft_bzero


//ft_memcpy        
{
       char     dest[15];
       char     dest2[15];
       const char    src[] = "Hello";

       printf("The string: %s\n", src);
       ft_memcpy(dest, src, strlen(src));
       printf("New string with my funtion: %s\n", dest );
       memcpy(dest2, src, strlen(src));
       printf("New string with real funtion: %s\n", dest2);
} 
//ft_memmove

//ft_strlcpy
{
    char    dest[30];
    const   char src[] = "";

    printf("My function/// RESULT  = %ld\n", ft_strlcpy(dest, src, strlen(src)));
    printf("Real function/// RESULT  = %ld\n", strlcpy(dest, src, strlen(src)));

    char src1a[] = "abcde";
    char dest1a[] = "1234567";
    char src1b[] = "abcde";
    char dest1b[] = "1234567";
    char src2a[] = "abcd";
    char dest2a[] = "123";
    char src2b[] = "abcd";
    char dest2b[] = "123";
    char src3a[] = "";
    char dest3a[] = "";
    char src3b[] = "";
    char dest3b[] = "";
    char src4a[] = "12345";
    char dest4a[] = "abc";
    char src4b[] = "12345";
    char dest4b[] = "abc";

    printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
            ft_strlcpy(dest1a, src1a, 0) == strlcpy(dest1b, src1b, 0) ? "Pass" : "Fail",
            strcmp(dest1a, dest1b) == 0 && strcmp(src1a, src1b) == 0 ? "Pass" : "Fail",
            ft_strlcpy(dest2a, src2a, 3) == strlcpy(dest2b, src2b, 3) ? "Pass" : "Fail",
            strcmp(dest2a, dest2b) == 0 && strcmp(src2a, src2b) == 0 ? "Pass" : "Fail",
            ft_strlcpy(dest3a, src3a, 0) == strlcpy(dest3b, src3b, 0) ? "Pass" : "Fail",
            strcmp(dest3a, dest3b) == 0 && strcmp(src3a, src3b) == 0 ? "Pass" : "Fail",
            ft_strlcpy(dest4a, src4a, 2) == strlcpy(dest4b, src4b, 2) ? "Pass" : "Fail",
            strcmp(dest4a, dest4b) == 0 && strcmp(src4a, src4b) == 0 ? "Pass" : "Fail");
}
//ft_toupper
int main()
{
        int c = 98;
        printf("Ma fonction :\n");
        printf("Lowercase -> %c\n", c);
        printf("Uppercase -> %c\n", ft_toupper(c));

        printf("\n");
        printf("Vraie fonction :\n");
        printf("Lowercase -> %c\n", c);
        printf("Uppercase -> %c\n", ft_toupper(c));
}
 
//ft_tolower

int main()
{
        int c = 66;
        printf("Ma fonction :\n");
        printf("Uppercase -> %c\n", c);
        printf("Lowercase -> %c\n", ft_tolower(c));

        printf("\n");
        printf("Vraie fonction :\n");
        printf("Uppercase -> %c\n", c);
        printf("Lowercase -> %c\n", tolower(c));

}
//ft_strchr
{
    const char str[] = "hello.comment.ca.va";
    const char ch = '.';
    char *ret;

    printf ("string before : %s\n", str);
    ret = strchr(str, ch);

    printf("String after : %s\n", ret);

    return(0);
}

// ft_strrchr
{
    const char str[] = "hello.comment.ca.va";
    const char ch = '.';
    char *ret;

    printf ("string before : %s\n", str);
    ret = strrchr(str, ch);

    printf("String after : %s\n", ret);

    return(0);
}

//ft_strncmp
{	
	printf(
        const char s1[] = "hello je suis la";
        const char s2[] = "hello toi ca va?";
        int n;
        n = sizeof(char) * 7;
        printf("%d\n", n);

        printf("%d\n", strncmp(s1, s2, n));
        printf("%d\n", ft_strncmp(s1, s2, n));
}
//ft_memchr
{
       char *p;
       char str[]="Hello Ca va";
      // char letter = 'C';
       //char letter = 'J';
       char letter = 'H';

       p = (char *)ft_memchr(str, letter, strlen(str));

       if (p != NULL)
              printf("%s\n", p);
       else
              printf("Character is not present!\n");
}

// ft_memcmp
{
	char s1[]="Heiuy";
	char s2[]= "Hellyo";

	printf("%d\n", ft_memcmp(s1, s2, 2));
	printf("%d\n", memcmp(s1, s2, 2));
}

//ft_strnstr
{
    const char largestring[] = "Foo Bar Baz";
    const char small[]= "Bar";
    char *ptr;
    char *ptr2;

    ptr = (char *)ft_strnstr(largestring, small, 8);
    printf("%s\n", ptr);
    ptr2 = (char *)strnstr(largestring, small, 8);
    printf("%s\n", ptr2);
}
// ft_strdup
 {
     const char src[] = "I want to copy this string into a new string\n";
 
     char *copy;
     char *realcopy;
     copy = ft_strdup(src);
     realcopy = strdup(src);
 
     printf("%s\n", copy);
     printf("%s\n", realcopy);
     free (copy);
 }

*/
