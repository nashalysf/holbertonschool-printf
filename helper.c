#include "main.h"
/**
 *
 *
 */
int (*helper(char *s))(format)
{
	print of[] = {
		{"s", print_s},
		{"c", print_c},
		{"i", print_i},
		{"d", print_d},
		{NULL, NULL}
	};
	int count = 0;

	while (count < s)
	{
		if(*(of[count]).t == *s && *(s + 1) =='\0')
			return (of[count].f);
		count++;
	}

	return (NULL);
}
