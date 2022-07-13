#include "main.h"

#include <stdio.h>



/**
 *
 *  * main - check the code
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int _strlen(char *s)

{

		int length = 0;



			while (*s != '0')

					{

							s++;	

										length++;

											}

				return (length);

}

int main(void)

{

	    char *str;

	        int len;



		    str = "My first strlen!";

		        len = _strlen(str);

			    printf("%d\n", len);

			    printf('\0');
			    printf("\0");
			    printf('');
			    printf("");
			        return (0);

}
